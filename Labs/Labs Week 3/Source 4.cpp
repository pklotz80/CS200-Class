#include <iostream>
using namespace std;

int main()
{
	//Variables

	float startingWage;
	float percentRaisePerYear;
	float adjustedWage;
	int yearsWorked;

	//User input
	cout << "Enter your starting wage: ";
	cin >> startingWage;

	cout << "Enter your % of raise per year: ";
	cin >> percentRaisePerYear;

	percentRaisePerYear /= 100;

	cout << "Enter your years worked: ";
	cin >> yearsWorked;

	adjustedWage = startingWage;

	for (int i = 0; i < yearsWorked; i++)
	{
		adjustedWage += adjustedWage * percentRaisePerYear;
	}
	cout << "The new wage is: $ " << adjustedWage;

	while (true) {}
	return 0;
}