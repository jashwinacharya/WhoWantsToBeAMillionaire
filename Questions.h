//The header file for the Question Class
#pragma once

#ifndef QUESTIONS_H
#define QUESTIONS_H


class Question
{
private:
	char PlayerAnswer;
	char CorrectAnswer;
	char PlayerChoice;
	char QuitChoice;
	int LifeLineCount;

public:
	Question()
	{
		LifeLineCount = 2;
		PrizeMoney = 0;
	}

	bool WrongAnswer;
	int PrizeMoney;

	void LifeLineResult(char Answer);
	void ResetLifeLineCount();
	void QuitGame();
	void LifeLineChoice();

	void Question1();
	void Question2();
	void Question3();
	void Question4();
	void Question5();
	void Question6();
	void Question7();
	void Question8();
	void Question9();
	void Question10();
	void Question11();
	void Question12();
	void Question13();
	void Question14();
	void Question15();
};

#endif 

