#include <iostream>
#include <string>
#include <array>
using namespace std;

struct Employee
{
	string name;
};

struct Manager
{
	string name;
	Employee*employees;
	int employeeCount;
};

int main()
{
	string names[16] = {
		"Paula", "James", "Jeremy", "Emily",
		"Abigail", "Deborah", "Madeline", "Alex",
		"Joseph", "Mathew", "Martha", "Anna",
		"Samuel", "Teresa", "Jeff", "Anthony"
	};

	int managerCount;

	cout << "How many managers should there be: ";
	cin >> managerCount;

	Manager*managers;
	managers = new Manager[managerCount];
	
	for (int i = 0; i < managerCount; i++)
	{
		managers[i].name = names[rand() % 16];
		managers[i].employeeCount = (rand() % 3);

		if (managers[i].employeeCount > 0)
		{
			Employee*employees;
			employees = new Employee[managers[i].employeeCount];
		}

			for (int j = 0; j < managers[i].employeeCount; j++)
			{
				managers[i].employees[j].name = names[rand() % 16];

				for (int m = 0; m < managerCount; m++)
				{
					cout << endl;
					cout << "Manager:           "
						<< managers[m].name << endl;
					cout << "Underling Count:   "
						<< managers[m].employeeCount << endl;

					for (int e = 0; e < managers[m].employeeCount; e++)
					{
						cout << "\t" << e + 1 << ". "
							<< managers[m].employees[e].name << endl;
					}
				}
			}
		}

	while (true) {}
	return 0;
}