#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef _DYNAMIC_ARRAY_HPP
#define _DYNAMIC_ARRAY_HPP



class DynamicArray
{
public:

	DynamicArray(int size);
	~DynamicArray();
	void Set(int index, string value);
	string Get(int index);
	int GetSize();
	void Display();



private:
	int m_size;
	string* m_arr;

};

#endif