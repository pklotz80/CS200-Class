#include <iostream>
#include <string>
using namespace std;

int main()
{

	//Variable
	int secretNumber = 7;
	int playerGuess;

	do
	{
		cout << "Enter a number: ";
		cin >> playerGuess;

		if (playerGuess < secretNumber)
		{
			cout << "Too low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too high!" << endl;
		}

	} while (playerGuess != secretNumber);

		cout << "You win!!" << endl;

	while (true); // don't quit the program
	return 0;
}