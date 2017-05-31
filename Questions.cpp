///This file has all the questions in it.

#include "Questions.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void Question::Question1()
{
	cout << " Here is the first question:" << endl << endl;

	cout << " 1. Who is the CEO of Berkshire Hathaway?" << endl;
	cout << "    A. Mark Zuckerberg" << endl;
	cout << "    B. Paul Allen" << endl;
	cout << "    C. Warner Buffet" << endl;
	cout << "    D. Bill Gates" << endl << endl;

	CorrectAnswer = 'C';      ///Store the correct answer in a temporary variable

	QuitGame();               ///Call this function to ask the player if he/she wants to quit or not
	if (LifeLineCount != 0)
	{
		LifeLineChoice();    ///Call this function to ask the player if they want to use the 50/50 life line
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	///Exit from the game and display the prize money if player chooses incorrect option
	if (PlayerAnswer != CorrectAnswer)
	{
		PrizeMoney = 0;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 10000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;
	
	Question2();   ///Jumps to the next question

	return;
}

///Same for the remaning questions as previous function.
void Question::Question2()
{
	cout << " Here is the second question:" << endl << endl;

	cout << " 2. What is the capital of Denmark?" << endl << endl;
	cout << "    A. Copenhagen" << endl;
	cout << "    B. Bern" << endl;
	cout << "    C. Prague" << endl;
	cout << "    D. Athens" << endl << endl;

	CorrectAnswer = 'A';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != CorrectAnswer)
	{
		PrizeMoney = 0;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 50000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question3();

	return;
}

void Question::Question3()
{
	cout << " Here is the third question:" << endl << endl;

	cout << " 3. Who is the Prime Minister of India?" << endl << endl;
	cout << "    A. Sonia Gandhi" << endl;
	cout << "    B. Narendra Modi" << endl;
	cout << "    C. Pranab Mukherji" << endl;
	cout << "    D. Shashi Tharoor" << endl << endl;

	CorrectAnswer = 'B';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != CorrectAnswer)
	{
		PrizeMoney = 0;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 100000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question4();
	return;
}

void Question::Question4()
{
	cout << " Here is the fourth question:" << endl << endl;

	cout << " 4. Who is the alter ego of playboy millionaire, Oliver Queen?" << endl << endl;
	cout << "    A. Batman" << endl;
	cout << "    B. Green Arrow" << endl;
	cout << "    C. Superman" << endl;
	cout << "    D. Green Lantern" << endl << endl;

	CorrectAnswer = 'B';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'B')
	{
		PrizeMoney = 10000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 150000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question5();

	return;
}

void Question::Question5()
{
	cout << " Here is the fifth question:" << endl << endl;

	cout << " 5. Which Hollywood Actor has won 3 Academy Awards in the Best Acting Category?" << endl;
	cout << "    A. Tom Hanks" << endl;
	cout << "    B. Sean Penn" << endl;
	cout << "    C. Daniel Day Lewis" << endl;
	cout << "    D. Denzel Washington" << endl << endl;

	CorrectAnswer = 'C';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'C')
	{
		PrizeMoney = 10000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 200000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question6();

	return;
}

void Question::Question6()
{
	cout << " Here is the sixth question:" << endl << endl;

	cout << " 6. Which country has the largest Muslim Population in the world?" << endl;
	cout << "    A. Indonesia" << endl;
	cout << "    B. Pakistan" << endl;
	cout << "    C. India" << endl;
	cout << "    D. USA" << endl << endl;

	CorrectAnswer = 'A';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'A')
	{
		PrizeMoney = 125000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 250000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question7();
	return;
}

void Question::Question7()
{
	cout << " Here is the seventh question:" << endl << endl;

	cout << " 7. Which country was the first to adopt Christianity?" << endl;
	cout << "    A. Saudi Arabia" << endl;
	cout << "    B. Mongolia" << endl;
	cout << "    C. Armenia" << endl;
	cout << "    D. Slovenia" << endl << endl;

	CorrectAnswer = 'C';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'C')
	{
		PrizeMoney = 215000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 300000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question8();
	return;
}

void Question::Question8()
{
	cout << " Here is the eight question:" << endl << endl;

	cout << " 8. Which College below is not part of the presitigious Ivy League?" << endl;
	cout << "    A. Cornell" << endl;
	cout << "    B. Harvard" << endl;
	cout << "    C. Dartmouth" << endl;
	cout << "    D. Duke" << endl << endl;

	CorrectAnswer = 'D';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'D')
	{
		PrizeMoney = 2250000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 350000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question9();
	return;
}

void Question::Question9()
{
	cout << " Here is the ninth question:" << endl << endl;

	cout << " 9. The possession of which territory has become the source of tension between Russsia and Ukraine?" << endl;
	cout << "    A. Crimea" << endl;
	cout << "    B. Sevastopol" << endl;
	cout << "    C. Sudak" << endl;
	cout << "    D. Chersonesus" << endl << endl;

	CorrectAnswer = 'A';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'A')
	{
		PrizeMoney = 285000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 400000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question10();

	return;
}

void Question::Question10()
{
	cout << " Here is the tenth question:" << endl << endl;

	cout << " 10. Who is the most powerful man in the world?" << endl;
	cout << "     A. Donald Trump" << endl;
	cout << "     B. Vladimir Putin" << endl;
	cout << "     C. Xi Jinping" << endl;
	cout << "     D. Pope Francis" << endl << endl;

	CorrectAnswer = 'B';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'B')
	{
		PrizeMoney = 365000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 450000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question11();

	return;
}

void Question::Question11()
{
	cout << " Here is the eleventh question:" << endl << endl;

	cout << " 11. What is the official language of Brazil?" << endl;
	cout << "     A. German" << endl;
	cout << "     B. Portuguese" << endl;
	cout << "     C. Italian" << endl;
	cout << "     D. Spanish" << endl << endl;

	CorrectAnswer = 'B';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'B')
	{
		PrizeMoney = 375000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 575000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question12();

	return;
}

void Question::Question12()
{
	cout << "Here is the twelfth question:" << endl << endl;

	cout << " 12. What was the name of the astronaut who joined Neil Armstrong and Buzz Aldrin on the mission for the first-ever moon landing?" << endl;
	cout << "     A. John Glenn" << endl;
	cout << "     B. Alan Shepard" << endl;
	cout << "     C. Wendy Lawrence" << endl;
	cout << "     D. Michael Collins" << endl << endl;

	CorrectAnswer = 'D';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'D')
	{
		PrizeMoney = 525000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 700000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question13();

	return;
}

void Question::Question13()
{
	cout << " Here is the thirteenth question:" << endl << endl;

	cout << " 13. What is the phobia of clowns called?" << endl;
	cout << "     A. Acrophobia" << endl;
	cout << "     B. Glossophobia" << endl;
	cout << "     C. Coulrophobia" << endl;
	cout << "     D. Aviatophobia" << endl << endl;

	CorrectAnswer = 'C';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'C')
	{
		PrizeMoney = 625000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 825000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question14();

	return;
}

void Question::Question14()
{
	cout << " Here is the fourteenth question:" << endl << endl;

	cout << " 14. Which sport below is not an Olympic Sport?" << endl;
	cout << "     A. Squash" << endl;
	cout << "     B. Badminton" << endl;
	cout << "     C. Basketball" << endl;
	cout << "     D. Baseball" << endl << endl;

	CorrectAnswer = 'A';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'A')
	{
		PrizeMoney = 735000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 900000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	Question15();

	return;
}

void Question::Question15()
{
	cout << " Here is the first question:" << endl << endl;

	cout << " 15. What were the names of Mahatma Gandhi's four sons?" << endl;
	cout << "     A. Ramdas, Harilal, Manilal, Devdas" << endl;
	cout << "     B. Mandas, Shankardas, Manilal, Ramdas" << endl;
	cout << "     C. Shankardas, Mandas, Harilala, Devdas" << endl;
	cout << "     D. Chandas, Mandas, Laldas, Devdas" << endl << endl;

	CorrectAnswer = 'A';

	QuitGame();
	if (LifeLineCount != 0)
	{
		LifeLineChoice();
		cout << "  You have " << LifeLineCount << " chance(s) to use this lifeline" << endl;
	}

	cout << endl << " Enter your choice (A,B,C,D):";
	cin >> PlayerAnswer;

	if (PlayerAnswer != 'A')
	{
		PrizeMoney = 800000;
		WrongAnswer = true;
		return;
	}

	PrizeMoney = 1000000;
	cout << " Congratulations, you won " << PrizeMoney << " dollars!!" << endl << endl;

	return;
} 
