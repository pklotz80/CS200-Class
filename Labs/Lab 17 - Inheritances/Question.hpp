#pragma once

#ifndef _QUESTION_HPP
#define _QUESTION_HPP

#include <ostream>
#include <string>
using namespace std;

class Question
{
protected:
	string m_questionText;

public:
	void Display();
	void SetQuestionText(const string& text);

};

class TrueFalseQuestion : public Question
{
private:
	string m_correctAnswer;

public:
	void Display();
	void SetCorrectAnswer(const string& correctAnswer);
	bool CheckAnswer(const string& userAnswer);
};

class MultipleChoiceQuestion : public Question
{
private:
	string m_answers[4];
	int m_correctAnswer;

public:
	void Display();
	void SetCorrectAnswer(int correctAnswer);
	bool CheckAnswer(int userAnswer);
	string SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3);
		
};

#endif
