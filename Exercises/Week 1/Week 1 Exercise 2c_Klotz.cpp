//Assignment: Week 1 Exercise 2c
//Student Name: Paula Klotz
//Date: 01/26/2017
//Program Questions:  If I write a less-than if statement it looks like this: if ( num < 6 ).  A greater-than if statement looks like this if ( num > 6 ).
//Both written together looks like this: if ( (num < 10) && (num > 1) ).  In this case, I was able to assign a greater-than statement to the boolean variable.

#include <iostream>
#include <string>
using namespace std;

int main()

{
	//Variables
	bool isTallEnoughForRide;
	int feet;

	//User input
	cout << "What is your height in feet? ";
	cin >> feet;

	//Assign value
	isTallEnoughForRide = feet > 3;

	//If statement
	if (!isTallEnoughForRide)
	{
		cout << "Too short to ride the roller coaster." << endl;
	}
	else
	{
		cout << "Permitted to ride the roller coaster." << endl;
	}

	while (true) {}
	return 0;
}