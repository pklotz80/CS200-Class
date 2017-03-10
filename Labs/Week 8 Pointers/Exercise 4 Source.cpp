#include <iostream>
#include <string>
using namespace std;

int main()
{
	string choice;
	cout << "Would you like to see information about" << endl;
	cout << "integers, floats, booleans, or doubles? " << endl;
	cin >> choice;

	int integers;
	float floats;
	bool booleans;
	double doubles;

	int* ptrInteger = &integers;
	float* ptrFloat = &floats;
	bool* ptrBoolean = &booleans;
	double* ptrDouble = &doubles;

	if (choice == "integers")
	{
		cout << "Integer Size: " << sizeof(integers) << ", " << "address: " << ptrInteger << endl;
	}
	if (choice == "floats")
	{
		cout << "Float Size: " << sizeof(floats) << ", " << "address: " << ptrFloat << endl;
	}	
	if (choice == "booleans")
	{
		cout << "Boolean Size: " << sizeof(booleans) << ", " << "address: " << ptrBoolean << endl;
	}
	if (choice == "doubles")
	{
		cout << "Double Size: " << sizeof(doubles) << ", " << "address: " << ptrDouble << endl;
	}

	while (true) {}
	return 0;
}