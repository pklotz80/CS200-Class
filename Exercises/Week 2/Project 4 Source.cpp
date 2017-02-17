//Assignment: Week 2 Project 4
//Student Name: Paula Klotz
//Date: 02/02/2017

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//User Input

	int feet;

	cout << "Enter the amount of feet: ";
	cin >> feet;

	//For loop
	for (int n = 0; n <= feet * 12; n = n++)
		if (n % 12 == 0)
		{
			cout << "|";
		}
		else
		{
			cout << "-";
		}
	
	while (true);
	return 0;
}