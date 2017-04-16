#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

	struct PoemMaker
	{
		string nouns[10];
		string adjectives[10];
		string buffer;

		void LoadNouns(string filename)
		{
			ifstream input (filename);

			for (int i=0; i < 10; i++)
			{
				input >> nouns[i];
			}
			input.close();
		}

		void LoadAdjectives(string filename)
		{
			ifstream input(filename);

			for (int i=0; i < 10; i++)
			{
				input >> adjectives[i];
			}
			input.close();
		}

		string GetRandomNoun()
		{
			int randomNumber = rand() % 10;
			string noun = nouns[randomNumber];
			return noun;
		}

		string GetRandomAdjective()
		{
			int randomNumber = rand() % 10;
			string adjective = adjectives[randomNumber];
			return adjective;
		}

		string GeneratePoem(int lines)
		{
			string poem = " ";
			for (int i = 0; i <= lines; i++)
			{
				poem = GetRandomNoun() + " " + "are" + " " + GetRandomAdjective();
			}
			return poem;
		}

	};

	int main()
	{
		srand(time(NULL));
		PoemMaker poemMaker;

		poemMaker.LoadNouns("nouns.txt");
		poemMaker.LoadAdjectives("adjectives.txt");
		string poem = poemMaker.GeneratePoem(5);

		cout << poem << endl;

		while (true) {}
		return 0;
}