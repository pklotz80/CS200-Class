//Assignment: Week 1 Exercise 2d
//Student Name: Paula Klotz
//Date: 01/26/2017
//Program Questions:  The same results occur whether I use a lower or upper-case letter.  As we start switch statements
//this will not be the case and will need to be more specific as to whether an upper or lower-case letter is accepted.

#include <iostream>
#include <string>
using namespace std;

int main()

{
	//Variables
	char letter1, letter2;

	//User input
	cout << "Enter two letters. First letter: ";
	cin >> letter1;
	cout << "Second letter: ";
	cin >> letter2;


	if (letter1 < letter2)
	{
		cout << "First letter comes first." << endl;
	}

	else
	{
		cout << "Second letter comes first." << endl;
	}

	while (true) {}
	return 0;
}