#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	//Variable
	int countUp = 1;
	
	//Loop
	while (countUp < 11)
	{
		cout << countUp << " ";
		countUp++;
	}
	 
	cout << endl << endl << "Done!" << endl;
	
	while (true); // don't quit the program
	return 0;
}