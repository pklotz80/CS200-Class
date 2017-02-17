//Assignment: Week 2 Project 3
//Student Name: Paula Klotz
//Date: 02/02/2017

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//User Input

	int sum = 0;
	bool isDone = false;
	char value;

	while (!isDone)
	{
		int num;
		cout << "Enter a number: ";
		cin >> num;
		sum = sum + num;

		cout << "Do you want to enter another value ('A' for yes, 'Q' for quit)? ";
		cin >> value;

		if ((value == 'A') || (value == 'a'))
		{ }
			if ((value == 'Q') || (value == 'q'))
			{
				isDone = true;
			}
	}
		cout << "The sum is: " << sum << endl;
	
	while (true);
	return 0;
}