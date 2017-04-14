#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Option
{
	string title;
	int count;
};

struct Poll
{
	string question;
	Option options[4];
};

int main()
{
	Poll myPoll;

	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;

	
	int selection = 0;
	int i;
	while (selection!=4)
	{
		cout << myPoll.question;
		for (int c = 0; c < 4; c++)
		{
			cout << c << "." << myPoll.options[c].title << endl;
		}
		
		cout << endl;
		cout << "What is your selection?" << endl;
		cout << ">>";
		cin >> i;
		
		for (i = 0; i < 4; i++)
		{
			myPoll.options[i];
		}
		
	}

	ofstream output;
	output.open("results.txt");

	output << myPoll.question << endl;
	output << myPoll.options[0].title << "\t" << myPoll.options[0].count << " votes" << endl;
	output << myPoll.options[1].title << "\t" << myPoll.options[1].count << " votes" << endl;
	output << myPoll.options[2].title << "\t" << myPoll.options[2].count << " votes" << endl;
	output << myPoll.options[3].title << "\t" << myPoll.options[3].count << " votes" << endl;


	output.close();

	while (true) {}
	return 0;
}

