#include <iostream>
#include <string>
using namespace std;

int main()
{

	//Variable
	int countDown = 10;

	//Loop
	while (countDown > 0)
	{
		cout << countDown << " ";
		countDown--;
	}

	cout << endl << endl << "Done!" << endl;

	while (true); // don't quit the program
	return 0;
}