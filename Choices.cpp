#include "Questions.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

///This function provides the choice of using the 50/50 lifeline.
void Question::LifeLineChoice()
{
	cout << " Do you want to use the 50/50 lifeline (y/n)? ";
	cin >> PlayerChoice;
	cout << endl;

	if (PlayerChoice == 'y')
	{
		LifeLineResult(CorrectAnswer);
	}
}

///Implements the 50/50 Life Line option
void Question::LifeLineResult(char Answer)
{
	srand(time(NULL));
	bool KeepRunning = true;
	
	char options[] = { 'A','B','C','D' };
	char RandomChar;

	while (KeepRunning)
	{
		RandomChar = options[rand() % (sizeof(options) - 1)];    //Chooses a random letter

		///Check whether the random character selected is NOT the answer to the question
		if (RandomChar != Answer)
		{
			KeepRunning = false;
		}
	}
	
	//Decrement the LifeLineCount variable to keep a track of how many times the 50/50 variable has been used.
	LifeLineCount--;

	cout << " 2 answer choices have been removed." << endl;
	cout << " Now you have to choose from " << RandomChar << " and " << Answer << " ." << endl << endl;

	return;
}

///Provides the option for quitting the game
void Question::QuitGame()
{
	cout << " Do you want to quit the game (y/n)? ";
	cin >> QuitChoice;

	if (QuitChoice == 'y')
	{
		cout << endl << " Alright! This is your final cash prize: " << "$" << PrizeMoney << endl << endl;
		exit(0);
	}
}

///Resets the LifeLineCount variable after the game is over or the player quits.
void Question::ResetLifeLineCount()
{
	LifeLineCount = 2;
}



