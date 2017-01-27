#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Varibles
	float x1, x2;
	
	//Assign values
	x1 = 5.00;

	//Display value
	cout << "x1 = " << x1 << endl;

	//User input
	cout << endl << "Where is x2? ";
	cin >> x2;
	
	//Statement
	if ((x1 - 5) <= x2 && x2 <= (x1 + 5))
	{
		cout << "Within 5 units from x1" << endl;
	}
	else
	{
		cout << "Too far away...." << endl; 
	}

	while (true); // don't quit the program
	return 0;
}