#pragma once

#ifndef _FRACTION_HPP
#define _FRACTION_HPP

#include <ostream>
using namespace std;

class Fraction
{
public:
	void Setup(int n, int d);

	// assignment operator
	Fraction& operator=(const Fraction& rhs);

	// multiplication operator
	friend Fraction operator*(const Fraction& a, const Fraction& b);

	// equality operator
	friend bool operator==(Fraction& a, Fraction& b);

	// output stream operator
	friend ostream& operator<<(ostream& out, Fraction& a);

private:
	int m_n;
	int m_d;
};

#endif
