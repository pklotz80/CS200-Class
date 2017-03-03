#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	for (itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];

		cout << "Enter price: ";
		cin >> prices[itemCount];

		itemCount++;
	}

	cout << endl;

	int counter = 0;

	for (counter = 0; counter < itemCount; counter++)
	{
		cout << "Item #" << counter << ": " << items[counter] << " $" << prices[counter] << endl;
		counter++;
	}

	while (true) {}
	return 0;
}