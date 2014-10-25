baseball.py README

This is the 2nd version of this program that I have built.  This time, I used Django
as the framework with JQuery for the Ajax calls.  This is a single page web app where
the user inputs a player's name plus the start and end dates for the query.  The app
then constructs a URL query at baseballmusings.com and parses the resulting page for 
game-by-game stats.  It then calculates the player's VORP over this period and returns
the result asynchronously to the page.  A MySQL database is used to store the players'
names and baseballmusings ID numbers.

Changes added 10-25-14:  
- Added code to views.py for processing iOS API requests.
- Added a script called db_init.py for populating a MySQL database with initial player data.