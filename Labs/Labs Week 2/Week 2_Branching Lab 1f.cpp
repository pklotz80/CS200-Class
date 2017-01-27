#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Varibles
	float a,b;

	//User input
	cout << "Enter a value for a: ";
	cin >> a;

	cout << "Enter a value for b: ";
	cin >> b;

	//Display
	cout << "What kind of operation? (1) Add (2) Subtract (3) Multiply (4) Divide " << endl;

	//User input
	int choice;
	cout << "Choice: ";
	cin >> choice;

	//Switch statement
	switch (choice)
	{
	case 1:
		cout << a + b << endl;
		break;
	case 2:
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a / b << endl;
		break;
	default:
		cout << "Invalid choice" << endl;
	}

	while (true); // don't quit the program
	return 0;
}