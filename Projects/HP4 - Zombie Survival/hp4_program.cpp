/*
MODIFY THIS FILE
*/

#include "hp4_program.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


//! Initializes the program state.
/**
    - Seed the random number generator:       srand( time( NULL ) );
    - Set the two pointer variables to nullptr; m_locationList and m_team.
    - Set the m_week variable to 0.
    - Call the Setup() function.
*/
Program::Program()
{
	srand( time( NULL ) );
	m_locationList = nullptr;
	m_team = nullptr;
	m_week = 0;
	Setup();
}

//! Cleans up the program.
/**
    - Call the Cleanup() function.
*/
Program::~Program()
{
	Cleanup();
}

//! Calls functions needed for program setup, and then calls Main().
/**
    - Call SetupDynamicArrays()
    - Call LoadLocations()
    - Call LoadPeople()
    - Call Main()


*/
void Program::Setup()
{
	SetupDynamicArrays();
	LoadLocations();
	LoadPeople();
	Main();
}

//! Cleans up the dynamic memory.
/**
    Safely free the memory allocated by m_team and m_locationList.


*/
void Program::Cleanup()
{
	delete[] m_team;
	delete[] m_locationList;
}

//! Main game loop.
/**
    With the game loop...
        - Increment the week by 1
        - Call DisplayWeekStats()
        - Call UpdateTeam()
        - Call ScavengePhase()
        - Call ZombiePhase()
        - if everyone is dead (call IsEveryoneDead())...
            - done with game loop
        - Call RoundPause()

    - Once the game is over, call DisplaySummary().
*/
void Program::Main()
{
	bool done = true;

	while (!done)
	{
		m_week += 1;
		DisplayWeekStats();
		UpdateTeam();
		ScavengePhase();
		ZombiePhase();
		if (IsEveryoneDead() == true)
		{
			done = true;
			
		}
		
		RoundPause();
	}	

	DisplaySummary();
}

//! Display the base's stats and the current week.
/**
    Display the current week, as well as the current ammo and food held by the base.
*/
void Program::DisplayWeekStats()
{
	cout << m_week << endl;
	cout << m_base.GetAmmo() << endl;
	cout << m_base.GetFood() << endl;
	
}

//! Update the team's hunger and health.
/**
    For each team member:
        - Call their Update() function
        - Look at the person's GetHunger() value, and request that amount of food from the base via TakeFood().
        - Have person Eat() that food.
        - Display that person's stats afterwards.
*/
void Program::UpdateTeam()
{
	Person person;
	
	
	person.Update();
	int food = person.GetHunger();
	int takeFromBase = m_base.TakeFood(food);
	person.Eat(takeFromBase);
	person.DisplayStats();

}

//! Get player to choose scavenging locations and update base and team stats.
/**
    - Display a list of all the available locations.
    - Ask the user which 3 locations to scavenge at, get their input.
    - Do input validation to make sure they have selected 3 valid indices.
    - Calculate the total amount of ammo salvaged from all 3 locations.
    - Calculate the total amount of food salvaged from all 3 locations.
    - Display the results - amount of food and ammo scavenged (total of each.)
    - Add that amount of ammo and food back to the base.
*/
void Program::ScavengePhase()
{
	int choice;
	
	cout << m_locationList << endl;
	cout << "Which 3 locations do you want to scavenge at? ";
	cin >> choice;


}

//! Check for zombie attack, and adjust team health and base stats.
/**
    - Generate a random number between 0 and 3.
    - If the random number is 0, then zombie attack:
        - Randomly select the zombie amount, between 1 and 3.
        - Calculate the total zombie health: 10 x the zombie count.
        - Display a message about the zombie attack, and how many zombies there are.
        - Determine if the base has enough ammo to fend off the zombies.
        - If there is not enough ammo:
            - Display a message that the base is out of ammo.
            - Subtract the amount of ammo the base has from the total zombie health.
            - Base ammo is now 0.
            - Zombies get a chance to attack a person. Randomly select a team member to attack.
            - Display a message of who the zombies attacked.
            - Call that team member's Hurt() function, with a random amount of damage between 10 and 20.
        - If there is enough ammo:
            - Subtract the total zombie health from the ammo count.
            - Display a message that the zombies have been killed, and how much ammo was used (equivalent to total zombie health).
*/
void Program::ZombiePhase()
{
	int randNum = rand() % 4;
	int randAmount = rand() % (4 - 1) + 1;
	int randDamage = rand() % (21 - 10) + 10;
	int randName = rand() % 207;
	double zombieHealth = 0;
	Person person;

	if (randNum == 0)
	{
		randAmount;
		zombieHealth *= 10;
		cout << "Zombies attack! Number of zombies are: " << randAmount << endl;
		double ammoAmount = m_base.GetAmmo();

		if (ammoAmount < 10)
		{
			cout << "The base is out of ammo!" << endl;
			ammoAmount -= zombieHealth;
			ammoAmount = 0;
			person.GetName();

			cout << "The zombie is attacking: " << randName << endl;
			person.Hurt(randDamage);
		}

		else
		{
			zombieHealth -= m_base.GetAmmo();
			cout << "The zombies have been killed! " << zombieHealth << endl;
		}

	}
}

//! Check if the entire team is dead. If everyone is dead, return true. Otherwise, return false.
/**
    Determine if everybody on the team is dead. If at least one person lives, then this will return false.
    If everybody is dead, return true.

    If everyone is dead, display a message that everyone is dead.

    @return <bool>      true if everyone is dead; false if at least one person is alive.
*/
bool Program::IsEveryoneDead()
{
	Person person;
	bool dead = true;

	if (person.IsDead() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//! Display the game summary.
/**
    Display the amount of weeks that the team survived.
*/
void Program::DisplaySummary()
{
	cout << m_week << endl;
}

//! Ask the user for input before continuing the program execution.
/**
    Ask the user to enter a value before continuing.
    (Can just be a dummy cin into a variable that doesn't do anything.)
*/
void Program::RoundPause()
{
	int variable;
	
	cout << "Enter a variable before continuing: ";
	cin >> variable;
}

//! Load location information from the locations.txt file.
/**
    Create an ifstream object and open the locations.txt file.

    Create three temporary variables: name (string), ammo (int), food (int).
    Also create a counter variable i (int) and initialize it to 0.

    Create a while loop, while the counter i is less than the location count m_locationCount...
        - Retrieve name, ammo, and food from the input file
        - Setup location #i via its Setup() function.
        - Increment the counter variable i.

    Close the input file when done.
*/
void Program::LoadLocations()
{
	ifstream input;
	input.open("locations.txt");

	string name;
	int ammo, food;
	int i = 0;
	Location location;

	while (i < m_locationCount)
	{
		input >> name;
		input >> ammo;
		input >> food;
		location.Setup(name, ammo, food);
		i++;
	}

	input.close();
}

//! Load a list of names from the names.txt file and randomly assign names to the team.
/**
    Load names:
        - Create an array of strings that will store names that are loaded in. The array size should be 207.
        - Create a counter variable i, initialize it to 0.
        - Create an input file stream, and open names.txt
        - Use a while loop to load data from the input file to the names array
            e.g., while ( input >> names[i] )
        - Within the while loop, increment i by 1.
        - Close the input file once done.

    Assign names to team:
        - For each team member, use the Setup() function.
        - Pass in a random name to the Setup function to assign the person a random name.
*/
void Program::LoadPeople()
{
	string names[207];

	int i = 0;
	ifstream input;
	input.open("names");

	while (input >> names[i])
	{
		input >> names[i];
		i++;
	}

	input.close();


	int randNum = rand() % 207;
	
	Person person;
	person.Setup(names[randNum]);
}

//! Ask the user how many locations and team members are available, and allocate memory for the dynamic arrays.
/**
    Ask the player how many locations and how many team members to have.

    Max location size is 10. Utilize a while loop to validate that the user has entered
    an amount between 0 and 10.

    Team count has to be 1 or more, use a while loop to validate that the user has entered
    an amount greater than 1.

    Afterward, use the m_locationList and m_team pointers to create
    dynamic arrays with the sizes given.
*/
void Program::SetupDynamicArrays()
{
	int locations, members;
	
	cout << "How many locations are available? ";
	cin >> locations;
	cout << "How man team members are available? ";
	cin >> members;

	m_locationList[locations];
	m_team[members];

}

