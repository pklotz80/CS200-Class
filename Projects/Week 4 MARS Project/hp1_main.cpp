/*
DON'T MODIFY THIS FILE
*/

#include <iostream>
using namespace std;

#include "hp1_program.hpp"
#include "hp1_tester.hpp"

int main()
{
	bool done = false;
	Program program;

	char charChoice;
	cout << "Run tests first? (y/n): ";
	cin >> charChoice;

	if (tolower(charChoice) == 'y')
	{
		Tester tester; 
		tester.Start();
	}

	while (!done)
	{
		program.DisplayMenu();
		int choice = program.GetValidInput(1, 3);

		switch (choice)
		{
		case 1:
			program.SetParameters();
			break;

		case 2:
			program.ViewParameters();
			break;

		case 3:
			program.RunSimulation();
			break;

		case 4:
			done = true;
			break;
		}
	}

	return 0;
}