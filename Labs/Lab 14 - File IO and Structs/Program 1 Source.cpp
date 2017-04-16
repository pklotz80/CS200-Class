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
	Option options[5];
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

	myPoll.options[4].title = "Quit";

	int selection = 0;
	bool done = false;
	while (!done)
	{
		cout << myPoll.question;
		cout << endl;
		for (int c = 0; c < 5; c++)
		{
			cout << c << "." << myPoll.options[c].title << endl;
		}

		cout << endl;
		cout << "What is your selection?" << endl;
		cout << ">> ";
		cin >> selection;

		for (selection; selection < 5; selection++)
		{
				myPoll.options[selection];
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

