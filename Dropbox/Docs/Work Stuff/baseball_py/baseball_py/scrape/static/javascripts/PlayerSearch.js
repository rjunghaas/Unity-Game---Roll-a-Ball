/*  
This Javascript function takes a form with a search field for a player's name, a starting date,
and an ending date.

It then performs two asynchronous actions using JQuery:

1. Using Ajax, the function performs an asynchronous call to a Python function called 'search' that queries
a database to find matches.  It displays the closest match in a hidden div below the search field.

2. Also using Ajax, the function performs an asynchronous call when the form is submitted to a
Python function called 'scrape'.  The function assembles a URL and provides the query parameters.
The resulting array is then parsed and displayed at the bottom of the page.
*/


/* This section of the program takes the string that is placed in the input field on each
keyup and calls the Python function search.  It then places the nearest search result in
the div called "Output".  For the use of the second section, it creates a global variable
containing the name of the closest matching player. */

$(document).ready(function(){
	$("#input").keyup(function(){
		var input_string = $("#input").val();
		$.ajax({
			url : "/players/index",
			type : "GET",
			dataType : "json",
			data : {
				user_response : input_string,
			},
			success : function(result) {
				$("#output").empty();
				$("#output").append(result.name);
				window.globalPlayerName = result.name;
			},
		});
		return false;
	});

/* This section of the program controls the Ajax call to the scrape function after the
'Submit' button is clicked.  It receives the VORP that is calculated and assembles this
value with the start date, end date, and player name in the 'message' div. */
	
	$("#submit").click(function(){
		var start_date = $("#start_date").val();
		console.log(start_date);
		var end_date = $("#end_date").val();
		var player = window.globalPlayerName;
		$.ajax({
			url : "/players/scrape",
			type : "GET",
			dataType : "json",
			data : {
				player : player,
				start_date : start_date,
				end_date : end_date,
			},
			success : function(json) {
				$('#message').empty();
				$("#message").append(player + ' from ' + start_date + ' to ' + end_date + ': <br> ' + 'VORP = ' + json.vorp);
			},
		});
		return false;
	});
});