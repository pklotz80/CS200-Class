#include <iostream>
#include <string>
using namespace std;

int main()
{
	string homeTown;

	cout << "What is your home town? ";
	cin >> homeTown;

	if (homeTown.size() > 6)
	{
		cout << "That's a long name!" << endl;
	}

	string name;

	cout << endl;
	cout << "What is your name? ";
	cin >> name;

	cout << endl;
	cout << "Hi there " << name
		<< " from " << homeTown << endl;
	
	while (true); //don't quit program
	return 0;
}