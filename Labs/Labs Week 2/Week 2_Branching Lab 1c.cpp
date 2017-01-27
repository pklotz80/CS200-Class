#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	float battery;

	//User input
	cout << "What is your current batter charge? %";
	cin >> battery;

	if (battery >= 75)
	{
		cout << "[****]";
	}
	else if (battery >= 50)
	{
		cout << "[***.]";
	}
	else if (battery >= 25)
	{
		cout << "[**..]";
	}
	else
	{
		cout << "[*...]";
	}

	while (true); // don't quit program
	return 0;
}