#include <iostream>
#include <string>
using namespace std;


int main()
{

	int*myInt;
	string*myStr;
	float*myFloat;

	myInt = new int;
	myStr = new string;
	myFloat = new float;

	*myInt = 20;
	*myStr = "Paula";
	*myFloat = 199.99;

	cout << *myInt << endl;
	cout << *myStr << endl;
	cout << *myFloat << endl;

	delete myInt;
	delete myStr;
	delete myFloat;

	while (true) {}
	return 0;
}