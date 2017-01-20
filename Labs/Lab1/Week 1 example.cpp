#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    string firstName, color, adjective;

    // Output and input
    cout << "Hello, what is your name? Paula ";
    cin >> firstName;

    cout << "What is your favorite color? Blue";
    cin >> color;

	cout << "ENTER AN ADJECTIVE: ";
	cin >> adjective;

    cout << endl;
    cout << "So can I call you " << adjective << " " << color << " " << firstName << " " << endl;

    return 0;
}
