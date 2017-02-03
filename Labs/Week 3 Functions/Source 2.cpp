#include <iostream>
using namespace std;
//Input: A dollar value
//Output: The tax amount

float AddTax(float dollar)
{
	float taxAmount = dollar * .12;
	return taxAmount;
}

int main()
{
	cout << "Price: $" << 9.99 << " \t with tax: $" << AddTax(9.99) + 9.99 << endl;
	cout << "Price: $" << 19.95 << " \t with tax: $" << AddTax(19.95) + 19.95 << endl;
	cout << "Price: $" << 10.00 << " \t with tax: $" << AddTax(10.00) + 10 << endl;

	while (true) {}
	return 0;
}