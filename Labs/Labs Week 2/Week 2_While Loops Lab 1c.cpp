#include <iostream>
#include <string>
using namespace std;

int main()
{

	//Variable
	int counter = 0;

	//Loop
	while (counter <= 20)
	{
		cout << counter << " ";
		counter +=5;
	}

	cout << endl << endl << "Done!" << endl;

	while (true); // don't quit the program
	return 0;
}