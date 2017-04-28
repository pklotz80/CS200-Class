#include <iostream>
using namespace std;

// UNCOMMENT THESE OUT AS YOU ADD THE FILES
#include "DynamicArray.hpp"
#include "Kitten.hpp"
#include "Button.hpp"
#include "Fraction.hpp"

const string TEST_DATA[] = {
	"Aardvark", "Albatross", "Alligator",
	"Bandicoot", "Bird", "Bison",
	"Cheetah", "Chipmunk", "Cow",
	"Elephant", "Emu", "Echidna",
	"Falcon", "Fox", "Fish",
	"Gecko", "Goat", "Goose",
	"Heron", "Horse", "Hyena",
	"Iguana", "Insect", "Impala",
	"Jackal", "Jellyfish", "Jaguar"
};

// UNCOMMENT THSE OUT AS YOU IMPLEMENT THE CLASSES!

void DynamicArrayProgram()
{
	DynamicArray arr( 5 );

	for ( int i = 0; i < arr.GetSize(); i++ )
	{
	arr.Set( i, TEST_DATA[i] );
	}

	arr.Display();
}

void KittenProgram()
{
	Kitten happyCat( TEST_DATA[2] );
	happyCat.Display();

	Kitten angryCat( TEST_DATA[4] );
	angryCat.Display();

	Kitten sadCat( TEST_DATA[6] );
	sadCat.Display();

	Kitten curiousCat( TEST_DATA[8] );
	curiousCat.Display();
}

void ButtonProgram()
{
	Button btn;
	btn.SetText( "Button!" );
	btn.Draw();

	btn.SetText( "Another Button!" );
	btn.Draw();

}

void FractionProgram()
{
	Fraction f1, f2, f3;

	f1.Setup( 1, 3 );
	f2.Setup( 2, 5 );

	f3 = f1 * f2;

	cout << f1 << " * " << f2 << " = " << f3 << endl;
}

int main()
{
	DynamicArrayProgram();
	KittenProgram();
	ButtonProgram();
	FractionProgram();

	while (true) {}
	return 0;
}
