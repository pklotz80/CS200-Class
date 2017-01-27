#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Varibles
	int choice;

	//User input
	cout << "What is your favorite fruit? " << endl;
	cout << "1. Apple \n" << endl;
	cout << "2. Banana \n" << endl;
	cout << "3. Pear \n" << endl;
	cout << "4. Strawberry \n" << endl;

	cout << "Your selection: ";
	cin >> choice;

	//Statement
	if ((choice < 1) || (choice > 4))
	{
		cout << "Invalid choice!";
	}
	else
	{
		cout << "Good choice!";
	}
	
	while (true); // don't quit the program
	return 0;
}