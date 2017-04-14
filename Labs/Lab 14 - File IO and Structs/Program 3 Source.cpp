#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	struct PoemMaker
	{
		string nouns[10];
		string adjectives[10];
		string buffer;

		void LoadNouns(string filename)
		{
			ifstream input("nouns.txt");

			while (input >> buffer)
			{

			}
		}

	};



	ifstream input("nouns.txt");
	ifstream input("adjectives.txt");
	ifstream output("poetry.txt");

	string searchFor, replaceWith, buffer;

	cout << "What word do you want to search for? " << endl;
	cin >> searchFor;
	cout << "What do you want to replace the word with? " << endl;
	cin >> replaceWith;


	ofstream output("story_revised.txt");

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