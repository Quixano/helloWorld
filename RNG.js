	var compNum = Math.floor(Math.random()*100)+1;
	var tries = 0;
	alert("It's the guessing game!");
	alert("I am thinking of a number from 1 to 100");
	do {
		guess = prompt("What do you think the number is?");
		if (guess < compNum) {
			document.write(guess+" is too low.");
			document.write("<br>");
			}
		else if (guess > compNum) {
			document.write(guess+" is too high.");
			document.write("<br>");
		}
	tries ++;
		} while (guess != compNum);
		alert("You guessed it in "+tries+" guesses!");
