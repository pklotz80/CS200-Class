//Assignment: Week 2 Project 1
//Student Name: Paula Klotz
//Date: 02/01/2017

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//User Input

	float price;
	string city;

	cout << "What is the price of the item? ";
	cin >> price;

	cout << "What city are you in? ";
	cin >> city;

	float tax;

	if (city == "Olathe")
	{
		tax = .065;
	}
	else if (city == "OverlandPark")
	{
		tax = .0935;
	}
	else if (city == "Raytown")
	{
		tax = .08225;
	}
	else if (city == "Independence")
	{
		tax = .07725;
	}
	else
	{
		tax = .08;
	}

	//Display Results
	float total = price + (price*tax);
	cout << "The Total Price is: $" << total << endl;
	
	while (true) {}
	return 0;
}