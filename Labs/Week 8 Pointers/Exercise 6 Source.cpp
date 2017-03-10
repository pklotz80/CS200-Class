#include <iostream>
#include <string>
using namespace std;

int main()
{
	string students[3];
	string*ptrStudent;
	int index;
	

	students[1] = "John";
	students[2] = "Samantha";

	cout << "Enter an index (0, 1, or 2): ";
	cin >> index;

	if (index == 0)
	{
		ptrStudent = &students[0];
	}
	else if (index == 1)
	{
		ptrStudent = &students[1];
	}
	else
	{
		ptrStudent = &students[2];
	}

	cout << "Enter a new name for the student: ";
	cin >> *ptrStudent;

	cout << "New Name: " << *ptrStudent << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}

	while (true) {}
	return 0;
}