//Assignment: Week 2 Project 2
//Student Name: Paula Klotz
//Date: 02/01/2017

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//User Input

	int number;

	cout << "Enter a number between 1 and 5: ";
	cin >> number;

	string numeral;

	while (number < 5)
	{ 
		switch (number)
		{
			case 1:
				numeral = "I";
				break;
			case 2:
				numeral = "II";
				break;
			case 3:
				numeral = "III";
				break;
			case 4:
				numeral = "IV";
				break;
			case 5:
				numeral = "V";
				break;
		}

		//Display results
		cout << "Roman numeral is: " << numeral << endl;
		cout << "Enter a number between 1 and 5: ";
		cin >> number;
	} 
	
	while (true);
	return 0;
}