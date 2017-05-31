/*	Name: Jashwin Acharya		Project Name: Who Wants To Be A Millionaire quiz game

	Project Description: The game focusses on a series of 15 questions which are to be answered
	by a player. The 50/50 lifeline provided omits two options from the question and can only be used 
	twice throughout the game. There is also a quit option which the player can adopt during the game.
*/

#include"Questions.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "**********************************************************************" << endl;
	cout << "*    HELLO AND WELCOME TO WHO WANTS TO BE A MILLIONAIRE!	     *" << endl;
	cout << "*    HERE ARE THE GAME RULES:				             *" << endl;
	cout << "*	 1. THERE WILL BE 15 QUESTIONS WITH 4 CHOICES EACH.	     *" << endl;
	cout << "*	 2. EACH CORRECT ANSWER REWARDS YOU WITH MONEY.		     *" << endl;
	cout << "*	 3. THE PRIZE AMOUNT KEEPS INCREASING AS YOU		     *" << endl;
	cout << "*           KEEP ANSWERING QUESTIONS CORRECTLY.			     *" << endl;
	cout << "*	 4. IF YOUR ANSWER IS WRONG, THEN YOU ARE AWARDED            *" << endl;
	cout << "*	    THE AMOUNT YOU HAVE ALREADY WON.		             *" << endl;
	cout << "*	 5. YOU ARE GIVEN ONLY ONE LIFELINE TO USE: 50/50.           *" << endl;
	cout << "*	 6. THIS LIFELINE REMOVES TWO ANSWER CHOICES AND YOU ARE     *" << endl;
	cout <<	"*	    THEN LEFT WITH ONLY 2 ANSWER CHOICES TO CHOOSE FROM.     *" << endl;
	cout << "*	 7. BE WARNED, 50/50 CAN ONLY BE USED TWICE IN THE GAME.     *" << endl;
	cout << "*   BEST OF LUCK!						     *" << endl; 
	cout << "**********************************************************************" << endl;

	char ch;

	Question ques;
	ques.Question1();

	while (ques.WrongAnswer)
	{
		ques.ResetLifeLineCount();
		cout <<" You won " << "$" << ques.PrizeMoney  << endl << endl;
		cout << " Do you want to play again? (y/n): ";
		cin >> ch;
		
		///Restarts the game from the beginning if player wants to play again
		if (ch == 'y')
		{
			ques.PrizeMoney = 0;
			ques.Question1();
		}
		else if(ch == 'n')
		{
			ques.WrongAnswer = false;
		}
	}
	return 0;
}