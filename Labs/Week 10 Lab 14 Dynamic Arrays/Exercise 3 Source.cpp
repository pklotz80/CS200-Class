#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL)); 
	int size;

	cout << "Enter the amount of lotto balls: ";
	cin >> size;

	int*lottoNumbers;
	lottoNumbers = new int [size];

	cout << endl;
	cout << "Lotto number count: " << size << endl;
	cout << endl;
	

	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = (rand() % 100) + 1;
		cout << lottoNumbers[i] << " ";
	}

	delete [] lottoNumbers;

	while (true) {}
	return 0;
}