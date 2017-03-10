#include <iostream>
#include <string>
using namespace std;

int main()
{
	string array[4];
	
	array[0] = "bob";
	array[1] = "matt";
	array[2] = "justin";
	array[3] = "tim";

	cout << "Array address: " << array << endl;
	cout << "Item 0 address: " << &array[0] << "\t value: " << array[0] << endl;
	cout << "Item 1 address: " << &array[1] << "\t value: " << array[1] << endl;
	cout << "Item 2 address: " << &array[2] << "\t value: " << array[2] << endl;
	cout << "Item 3 address: " << &array[3] << "\t value: " << array[3] << endl;
		
	while (true) {}
	return 0;
}