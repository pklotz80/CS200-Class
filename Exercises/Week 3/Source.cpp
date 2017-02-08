#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	if (english == "cat")
	{
		return "billee";
	}
	else if (english == "dog")
	{
		return "kutta";
	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if (english == "rabbit")
	{
		return "khargosh";
	}
	else
	{
		return "word not found";
	}
}

string GetEnglish(string hindi)
{
	if (hindi == "billee")
	{
		return "cat";
	}
	else if (hindi == "kutta")
	{
		return "dog";
	}
	else if (hindi == "medhak")
	{
		return "frog";
	}
	else if (hindi == "khargosh")
	{
		return "rabbit";
	}
	else
	{
		return "word not found";
	}
}

// Menu functions

void DisplayMenu()
{
	cout << "1. English to Hindi" << endl;
	cout << "2. Hindi to English" << endl;
	cout << "3. Quit" << endl;
	cout << "\n";

}

void EnglishToHindi()
{
	string englishWord;
	cout << "English: ";
	cin >> englishWord;
	string hindiTranslation;
	hindiTranslation = GetHindi(englishWord);
	cout << "Hindee translation: " << hindiTranslation << "\n" << endl;

}

void HindiToEnglish()
{
	string hindiWord;
	cout << "Hindi: ";
	cin >> hindiWord;
	string englishTranslation;
	englishTranslation = GetEnglish(hindiWord);
	cout << "English translation: " << englishTranslation << "\n"<< endl;

}

int main()
{
	bool isDone = false;
	int choice;

	while (!isDone)
	{
		DisplayMenu();

		//User input

		cout << "Enter the number selected: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			EnglishToHindi();
			break;
		case 2:
			HindiToEnglish();
			break;
		case 3:
			isDone = true;

		}
	}
	while (true) {}
	return 0;
}