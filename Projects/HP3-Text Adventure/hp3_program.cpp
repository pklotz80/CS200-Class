/*
MODIFY THIS FILE
*/

#include "hp3_program.hpp"

#include <iostream>
using namespace std;


/* Setup() - 	Create the list of locations
*              Allocate needed memory
* */
void Program::Setup()
{
	
	locationList = new Location[6];

	locationList[0].name = "Candy Room";
	locationList[0].description = "There is a lot of candy here!";

	locationList[1].name = "Money Room";
	locationList[1].description = "This room is filled with million dollar bills!";

	locationList[2].name = "Artifact Room";
	locationList[2].description = "There are old Egyptian artificats here!";

	locationList[3].name = "Wisdom Room";
	locationList[3].description = "There is wisdom beyond your years in this room!";

	locationList[4].name = "Fountain of Youth Room";
	locationList[4].description = "You can drink from the fountain of youth and remain young forever!";

	locationList[5].name = "Time Travel Room";
	locationList[5].description = "You can travel anywhere in time!";

	locationList[1].ptrToEast = &locationList[2];
	locationList[2].ptrToWest = &locationList[1];
	locationList[2].ptrToSouth = &locationList[4];
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToNorth = &locationList[0];
	locationList[3].ptrToWest = &locationList[2];
	locationList[4].ptrToEast = &locationList[5];
	locationList[4].ptrToNorth = &locationList[2];
	locationList[5].ptrToWest = &locationList[4];
	locationList[5].ptrToNorth = &locationList[3];


	ptrCurrentLocation = &locationList[1];
	ptrEndLocation = &locationList[0];
}

/* Cleanup() - 	Clean up memory allocated
* */
void Program::Cleanup()
{
	if (locationList != nullptr)
	{
		delete[] locationList;
	}
}



/* Main() - Main program loop
* */
void Program::Main()
{
	bool done = false;
	while (!done)
	{
		DisplayCurrentLocation();
		if (ptrCurrentLocation == ptrEndLocation)
		{
			cout << "You have reached your destination!" << endl;
			done = false;
			cout << endl << "GOOD BYE!" << endl;
		}

		

		string input = GetUserInput();

		if (input == "n" && ptrCurrentLocation->ptrToNorth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
		}
		else if (input == "s" && ptrCurrentLocation->ptrToSouth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
		}
		else if (input == "e" && ptrCurrentLocation->ptrToEast != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
		}
		else if (input == "w" && ptrCurrentLocation->ptrToWest != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
		}
		else if (input == "q")
		{
			done = false;
		}
		else
		{
			cout << "Invalid choice." << endl;
		}
	}
}



/* DisplayCurrentLocation() - Use the current location
*              pointer to display the location's name
*              and description, as well as which
*              directions the player can move next.
* */
void Program::DisplayCurrentLocation()
{
	cout << ptrCurrentLocation->name << endl;
	cout << ptrCurrentLocation->description << endl;

	if (ptrCurrentLocation->ptrToNorth != nullptr)
	{
		cout << "You may travel: " << "*north" << endl;	
	}
	if (ptrCurrentLocation->ptrToSouth != nullptr)
	{
		cout << "You may travel: " << "*south" << endl;
	}
	if (ptrCurrentLocation->ptrToEast != nullptr)
	{
		cout << "You may travel: " << "*east" << endl;
	}
	if (ptrCurrentLocation->ptrToWest != nullptr)
	{
		cout << "You may travel: " << "*west" << endl;
	}
}



/* GetUserInput() - Display the list of options to the
*                  user, then get their input and return
*                  their choice.
* */
string Program::GetUserInput()
{
	string selection;
	cout << endl;
	cout << "Options: (n)orth, (s)outh, (e)ast, (w)est, (q)uit" << endl;
	cout << ">> ";
	cin >> selection;
	if (selection == "n")
	{
		return "n";
	}
	else if (selection == "s")
	{
		return "s";
	}
	else if (selection == "e")
	{
		return "e";
	}
	else if (selection == "w")
	{
		return "w";
	}
	else
	{
		return "q";
	}
}



/************************************/
/* Don't modify *********************/
/************************************/

Program::Program()
{
	locationList = nullptr;
	ptrCurrentLocation = nullptr;
	Setup();
}

Program::~Program()
{
	Cleanup();
}