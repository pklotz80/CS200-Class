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
	College* colleges;
	colleges = new College[3];
	colleges[0].name = "JCCC";
	colleges[1].name = "MCCKC";
	colleges[2].name = "KCKCC";
	colleges[0].state = "KS";
	colleges[1].state = "MO";
	colleges[2].state = "KS";

	Student* students;
	students = new Student[5];
	
	int selection;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name for student " << i << ": ";
		cin >> students[i].name;
		cout << "Which college for " << students[i].name << "?" << endl;
		cout << endl;

		for (int c = 0; c < 3; c++)
		{
			cout << c + 1 << ". " << colleges[c].name << "\t" << colleges[c].state << endl;
		}

		cout << endl;
		cout << "<< ";
		
		int index;
		cin >> index;
		cout << endl;

		students[i].ptrSchool = &colleges[index];
		
	}

	cout << endl;
	cout << "All Students:" << endl;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{

		cout << i + 1 << ". " << students[i].name << "\t" << students[i].ptrSchool->name << "\t" << students[i].ptrSchool->state << endl;
		
	}

	delete[] colleges;
	delete[] students;


	while (true) {}
	return 0;
}