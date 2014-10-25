from django.template import loader, Context, Template
from django.http import *
from baseball_py.scrape.models import player
from django.shortcuts import render_to_response
import simplejson
import re
import urllib2
from lxml import etree, html
from datetime import *
from django.utils.datastructures import MultiValueDictKeyError


'''This program has three functions:
1. Search:  Takes an input string and matches to the closest player's name in the database.
2. CalcVorp: Takes a list of a player's stats and returns the VORP for the player.
3. Scrape:  Takes a start date, end date, and player's name and returns the VORP.  '''

'''Search function takes a request containing a search string.  It then finds the closest
match to this search string in the database and returns a JSON object containing [name, number]
where number corresponds to a unique ID number for the player.'''

def search(request):
	players = player.objects.all()
	matches = []
	
	try:
		if request.is_ajax():
			x = request.GET['user_response']
			for each in players:
				m = re.search(x.lower(), each.name.lower())
				if m != None:
					matches.append(each)
				else:
					continue
		
			c = Context({ 'name': matches[0].name, 'number': matches[0].number })
			output = simplejson.dumps({'name': c['name'], 'number': c['number']})
			return HttpResponse(output)
		else:
			x = request.GET['user_response']
			for each in players:
				m = re.search(x.lower(), each.name.lower())
				if m != None:
					matches.append(each)
				else:
					continue
		
			c = Context({ 'name': matches[0].name, 'number': matches[0].number })
			output = simplejson.dumps({'name': c['name'], 'number': c['number']})
			return HttpResponse(output)
	except MultiValueDictKeyError:
		return render_to_response("search.html")


'''calcVORP takes a list of statistics of the form 
[games,ab,runs,hits,dbl,tpl,hr,rbi,bb,hbp,cs,sh,sf,gdp,ba,oba,slug,ops]
and calculates the VORP for a player given these statistics. '''

def calcVORP(statsArray):
		# CONSTANTS
		lgBA = 0.253
		lgOBP = 0.317
		lgSLG = 0.396
		lgRunsPerOut = 0.1633
		replaceR = 0.8
		
		replaceRadical = (25 * lgOBP * lgSLG) / (1 - lgBA)
		replaceRoot = (replaceRadical ** (1/3.0))
		replaceP = (0.1073-(0.11 * replaceR)) * replaceRoot
		
		ab = statsArray[1]
		hits = statsArray[3]
		cs = statsArray[10]
		sh = statsArray[11]
		sf = statsArray[12]
		gdp = statsArray[13]
		
		totalOuts = ab - hits + cs + sh + sf + gdp
		totalSeasons = (float(statsArray[0])) / 150
		adjustedOuts = (totalOuts / totalSeasons)
		runsProduced = (lgRunsPerOut * adjustedOuts)
		
		replaceRunsProduced = (replaceR * runsProduced)
		
		walks = statsArray[8]
		hbp = statsArray[9]
		doubles = statsArray[4]
		triples = statsArray[5]
		homeRuns = statsArray[6]
		
		totalBases = hits + doubles + (2 * triples) + (3 * homeRuns) + walks + hbp
		runsCreated = ((hits + walks) * totalBases) / (ab + walks)
		adjustedRunsCreated = (runsCreated / totalSeasons)
		
		vorp = (adjustedRunsCreated - replaceRunsProduced)
		
		return vorp


'''Scrape function takes a request containing the player's name, start date, and end date
and returns a JSON object of form [vorp].  The request is first parsed for the input values.
The player_num is looked up from the player database.  A URL query is then assembled using
regular expressions.  The resulting query is then parsed using lxml for the player's stats.
These are then assembled into a list which fed to a call to calcVorp.  The resulting
VORP is then returned as a JSON object.'''

def scrape(request):
	if request:
		start_date = datetime.strptime(request.GET['start_date'], '%m/%d/%Y')
		end_date = datetime.strptime(request.GET['end_date'], '%m/%d/%Y')
		name = request.GET['player']
		player_num = player.objects.get(name = name).number

		s = start_date.strftime("%m") + "%2F" + start_date.strftime("%d") + "%2F" + start_date.strftime("%Y")
		e = end_date.strftime("%m") + "%2F" + end_date.strftime("%d") + "%2F" + end_date.strftime("%Y")

		root = "http://www.baseballmusings.com/cgi-bin/PlayerInfo.py?StartDate=" + s +"&EndDate=" + e + "&GameType=all&PlayedFor=0&PlayedVs=0&Park=0&PlayerID=" + str(player_num)

		doc = urllib2.urlopen(root)
		root = html.parse(doc).getroot()
		tables = root.find_class("dbd")

		totalsRow = tables[0].find_class("toprow")
		length = len(totalsRow)
		last = totalsRow[length-1]

		games, split2 = last[1].text_content().split(' ')
		games = int(games)

		ab = int(last[3].text_content())
		runs = int(last[4].text_content())
		hits = int(last[5].text_content())
		dbl = int(last[6].text_content())
		tpl = int(last[7].text_content())
		hr = int(last[8].text_content())
		rbi = int(last[9].text_content())
		bb = int(last[10].text_content())
		hbp = int(last[12].text_content())
		cs = int(last[15].text_content())
		sh = int(last[16].text_content())
		sf = int(last[17].text_content())
		gdp = int(last[18].text_content())

		summaryRow = tables[1].find_class("number")
		ba = float	(summaryRow[6].text_content())
		oba = float(summaryRow[7].text_content())
		slug = float(summaryRow[8].text_content())
		ops = oba + slug

		solution = [games,ab,runs,hits,dbl,tpl,hr,rbi,bb,hbp,cs,sh,sf,gdp,ba,oba,slug,ops]
		vorp = round(calcVORP(solution),2)
		return HttpResponse(simplejson.dumps({'vorp' : vorp}))
	else:
		return render_to_response("search.html")