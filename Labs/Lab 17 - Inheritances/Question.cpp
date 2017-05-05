#include "Question.hpp"
#include <iostream>
#include <string>
using namespace std;


void Question::Display()
{
	cout << m_questionText << endl;
}

void Question::SetQuestionText(const string& text)
{
	m_questionText = text;
}

void TrueFalseQuestion::Display()
{
	Question::Display();
	string userAnswer;
	cout << "You can answer (true) or (false): ";
	
}

void TrueFalseQuestion::SetCorrectAnswer(const string& correctAnswer)
{
	m_correctAnswer = correctAnswer;
}

bool TrueFalseQuestion::CheckAnswer(const string& userAnswer)
{
	bool correct = true;
	if (userAnswer == m_correctAnswer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MultipleChoiceQuestion::Display()
{
	Question::Display();
	int userAnswer;
	cout << "Please select from the following choices: " << endl;
		for (int i = 0; i < 4; i++)
			{
				cout << i << ". " << m_answers[i] << endl;
			}
			
}

void MultipleChoiceQuestion::SetCorrectAnswer(int correctAnswer)
{
	m_correctAnswer = correctAnswer;
}


bool MultipleChoiceQuestion::CheckAnswer(int userAnswer)
{
	bool correct = true;

	if (userAnswer == m_correctAnswer)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string MultipleChoiceQuestion::SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3)
{
	m_answers[0] = a0;
	m_answers[1] = a1;
	m_answers[2] = a2; 
	m_answers[3] = a3;

	for (int i = 0; i < 4; i++)
	{
		return m_answers[i];
	}
}





