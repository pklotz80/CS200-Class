#include "Kitten.hpp"

#include <iostream>
#include <string>
using namespace std;

int Kitten::m_kittenCount = 0;

Kitten::Kitten(string name)
{
	m_name = name;
	m_kittenCount++;
}

void Kitten::Display()
{
	cout << "Kitten: " << m_name << ", Kitten Count: " << m_kittenCount << endl;
}