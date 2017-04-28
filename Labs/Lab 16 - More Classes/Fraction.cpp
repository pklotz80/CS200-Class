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
	rhs.m_n = m_n;
	rhs.m_d = m_d; 
}

// Friend functions

ostream& operator<<(ostream& out, Fraction& a)
{
	out << a.m_n << "/" << a.m_d << endl;
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
		int numerator = a.m_n * b.m_n;
		int denominator = b.m_n * b.m_d;
		numerator = *product;
		

		

		return product;
}