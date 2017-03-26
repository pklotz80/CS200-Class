#include <iostream>
#include <string>
using namespace std;

struct College
{
	string name;
	string state;
};

struct Student
{
	string name;
	College* ptrSchool;
};


int main()
{

	string colleges[3];
	colleges[0] = "JCCC KS";
	colleges[1] = "MCCKC MO";
	colleges[2] = "KCKCC KS";
	string students[5];
	string*ptrSchool;
	int selection;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name for student " << i << ": ";
		cin >> students[i];
		cout << "Which college for " << students[i] << "?" << endl;
		cout << endl;

		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << ". " << colleges[i] << endl;
		}

		cout << endl;
		cout << "<< ";
		cin >> selection;
		cout << endl;

		if (selection == 1)
		{
			ptrSchool = &colleges[0];
		}
		else if (selection == 2)
		{
			ptrSchool = &colleges[1];
		}
		else
		{
			ptrSchool = &colleges[2];
		}
	}

	cout << endl;
	cout << "All Students:" << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ". " << students[i] << "\t" << (*ptrSchool) << endl;
	}

	while (true) {}
	return 0;
}