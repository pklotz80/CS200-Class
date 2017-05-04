#include "Question.hpp"
#include <string>
#include <iostream>
using namespace std;

class QuestionBase
{
protected:
	string m_questionText;

public:
	void QuestionBase::Display()
	{
		cout << m_questionText << endl;
	}

	void SetQuestionText(const string& text)
	{
		m_questionText = text;
	}
};

class TrueFalseQuestion : public QuestionBase
{
private:
	string m_correctAnswer;

public:
	void QuestionBase::Display() 
	{
		
		string userAnswer;
		cout << "You can answer (true) or (false): ";
		cin >> userAnswer;
	}

	void SetCorrectAnswer(const string& correctAnswer)
	{
		m_questionText = correctAnswer;
	}

	bool CheckAnswer(const string& userAnswer)
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

};

class MultipleChoiceQuestion : public QuestionBase
{
private:
	string m_answers[4];
	int m_correctAnswer;

public:
	void QuestionBase::Display()
	{
		int userAnswer;
		cout << "Please select from the following choices: ";
		for (int i = 0; i < 4; i++)
		{
			cout << i << ". " << m_answers[i] << endl;
		}
		cin >> userAnswer;
	}

	void SetCorrectAnswer(int correctAnswer)
	{
		m_questionText = correctAnswer;
	}

	bool CheckAnswer(int userAnswer)
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

	string SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3)
	{
		m_answers[0] = a0;
		m_answers[1] = a1;
		m_answers[2] = a2;
		m_answers[3] = a3;
	}

};
