#include "DynamicArray.hpp"

#include <iostream>
#include <string>
using namespace std;

DynamicArray::DynamicArray(int size)
{
	cout << "DynamicArray constructor" << endl;
	m_arr = nullptr;

	if (size > 0)
	{
		m_size = size;
		m_arr[size];
		m_arr = new string[size];
	}
}

DynamicArray::~DynamicArray()
{
	cout << "DynamicArray destructor" << endl;
	
	if (m_arr != nullptr)
	{
		delete[] m_arr;
	}
}

void DynamicArray::Set(int index, string value)
{
	if (index > 0 || index < m_size)
	{
			m_arr[index] = value;
	}
}

string DynamicArray::Get(int index)
{
	if (index > 0 || index < m_size)
	{
		return "";
	}
	else
	{
		return m_arr[index];
	}
}

int DynamicArray::GetSize()
{
	return m_size;
}

void DynamicArray::Display()
{
	for (int i = 0; i < m_size; i++)
	{
		cout << i << ". " << m_arr[i] << endl;
	}
}