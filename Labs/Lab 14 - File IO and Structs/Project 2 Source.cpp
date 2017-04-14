#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string searchFor, replaceWith, buffer;
	
	cout << "What word do you want to search for? " << endl;
	cin >> searchFor;
	cout << "What do you want to replace the word with? " << endl;
	cin >> replaceWith;

	ifstream input ( "story_original.txt" );
	ofstream output ( "story_revised.txt" );

	while (input >> buffer)
	{
		if (buffer == searchFor)
		{
			output << replaceWith << " ";
		}
		else
		{
			output << buffer << " ";
		}
		
	}

	input.close();
	output.close();

	return 0;
}