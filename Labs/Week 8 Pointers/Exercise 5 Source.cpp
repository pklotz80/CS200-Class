#include <iostream>
#include <string>
using namespace std;

int main()
{
	float priceHamburger, priceFries, priceSalad;
	priceHamburger = 2.50;
	priceFries = 1.99;
	priceSalad = 5.50;

	float*ptrPrice;
	char choice;

	float taxAmt;
	

	cout << " Do you want a [h]amburger, [f]ries, or [s]alad? ";
	cin >> choice;

	if (choice == 'h')
	{
		ptrPrice = &priceHamburger;
		cout << "Original Price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * (double)0.065;
		*ptrPrice = *ptrPrice + (double)taxAmt;
		cout << "With Tax: " << *ptrPrice << endl;
	}
	else if (choice == 'f')
	{
		ptrPrice = &priceFries;
		cout << "Original Price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * (double)0.065;
		*ptrPrice = *ptrPrice + (double)taxAmt;
		cout << "With Tax: " << *ptrPrice << endl;
	}
	else if (choice == 's')
	{
		ptrPrice = &priceSalad;
		cout << "Original Price: " << *ptrPrice << endl;
		taxAmt = *ptrPrice * (double)0.065;
		*ptrPrice = *ptrPrice + (double)taxAmt;
		cout << "With Tax: " << *ptrPrice << endl;
	}
	else
	{
		ptrPrice = 0;
	}

	while (true) {}
	return 0;
}