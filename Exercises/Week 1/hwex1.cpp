#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
	// Variable declarations
	float width1, width2;
	float length1, length2;
	float area1, area2;
	float perimeter1, perimeter2;

	//Program description
	cout << "Room Calculator \n\n";
	
	// Get user input:
	cout << "Room 1 \n\n";
	cout << "Enter the width of room 1: ";        // text output
	cin >> width1;                       // input from the user

	cout << "Enter the length of room 1: ";
	cin >> length1;

	area1 = width1 * length1;              // assignment statement
	perimeter1 = 2 * width1 + 2 * length1; //assignment statement

										// Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area1 << endl;
	cout << "Perimeter: " << perimeter1 << endl;

	// Get user input:
	cout << endl;
	cout << "Room 2 \n\n";
	cout << "Enter the width of room 2: ";        // text output
	cin >> width2;                       // input from the user

	cout << "Enter the length of room 2: ";
	cin >> length2;

	area2 = width2 * length2;              // assignment statement
	perimeter2 = 2 * width2 + 2 * length2; //assignment statement

										   // Display results:
	cout << endl;                       // empty line
	cout << "Area: " << area2 << endl;
	cout << "Perimeter: " << perimeter2 << endl;

	while (true);
	return 0;           // end of program
}
