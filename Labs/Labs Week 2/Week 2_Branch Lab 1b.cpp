#include <iostream>
#include <string>
using namespace std;

int main()
{

	//Variables
	float studentPoints, totalPoints;

	//User input
	cout << "Enter your score: ";
	cin >> studentPoints;

	cout << "Enter the total points: ";
	cin >> totalPoints;

	//Formula
	float percent = (studentPoints / totalPoints) * 100;

	//Display results
	cout << "Results: " << percent << "% \t";

	//Statement
	if (percent >= 70)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}

	while (true); // don't quit program
	return 0;
}