#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 10;
	float b = 1.99;
	string c = "hello";

	int* prtInteger = &a;
	float* prtFloat = &b;
	string* prtString = &c;

	cout << prtInteger << " = " << a << endl;
	cout << prtFloat << " = " << b << endl;
	cout << prtString << " = " << c << endl;


	while (true) {}
	return 0;
}