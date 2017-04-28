#include "Fraction.hpp"

#include <iostream>
#include <string>
using namespace std;

void Fraction::Setup(int n, int d)
{
	m_n = n;
	m_d = d;
}

Fraction& Fraction::operator=(const Fraction& rhs) 
{
	m_n = rhs.m_n;
	m_d = rhs.m_d;
	return *this;
}
	

// Friend functions

ostream& operator<<(ostream& out, Fraction& a)
{
	out << a.m_n << "/" << a.m_d << endl;
	return out;
}

bool operator==(Fraction& a, Fraction& b)
{
	bool same = true;
	if (a.m_n == a.m_d)
	{
		return true;
	}
	else if (b.m_n == b.m_d)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
		Fraction product;
		product.m_n = a.m_n * b.m_n;
		product.m_d = a.m_d * b.m_d;
		return product;
}