//Assignment: Week 1 Exercise 2a
//Student Name: Paula Klotz
//Date: 01/26/2017
//Program Description:  This program is designed to determine a ticket price based on age. If a person's 
//age is less than 13, a ticket price of 5.00 will be displayed. If a person's age is greater than 13, a 
//ticket price of 7.00 will be displayed.

#include <iostream>
#include <string>
using namespace std;

int main()

{
	int age;
	float ticketPrice;

	cout << "What is your age? ";
	cin >> age;

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket price: " << ticketPrice << endl;

	while (true) {}
	return 0;
}