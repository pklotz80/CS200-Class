#pragma once
#ifndef _KITTEN_HPP
#define _KITTEN_HPP

#include <iostream>
#include <string>
using namespace std;

class Kitten
{
private:
	string m_name;

public:
	static int m_kittenCount;
	Kitten(string name);
	void Display();
};

#endif
