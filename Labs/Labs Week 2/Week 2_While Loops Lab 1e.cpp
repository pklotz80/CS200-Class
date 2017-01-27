#include <iostream>
#include <string>
using namespace std;

int main()
{
	//User input
	cout << "Please enter a number between 0 and 5: ";
	
	int choice;
	cin >> choice;

	while (choice < 0 || choice > 5)
	{
		cout << "Invalid entry. Try again.";
		cin >> choice;
	}
		cout << "Thank you." << endl;

	while (true); // don't quit the program
	return 0;
}