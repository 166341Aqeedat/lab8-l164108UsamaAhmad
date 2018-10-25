#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational()              //set values
{
	
	numerator = 0;
	denominator = 0;
};
Rational::Rational(int n, int d)                             //get value
{
	numerator = n;
	denominator = d;
}
Rational Rational::operator +(Rational obj)                     //add and store
{
	Rational result2;
	int m, n;
	m = denominator;
	n = obj.denominator;
	while (m != n)
	{
		if (m < n)
		{
			m = m + denominator;
		}
		else
		{
			n = n + obj.denominator;
		}
	}
	result2.numerator = (m / denominator)*numerator + (m / obj.denominator)*obj.numerator;
	result2.denominator = m;
	if (result2.numerator < result2.denominator)
	{
		for (int i = result2.numerator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.denominator < result2.numerator)
	{
		for (int i = result2.denominator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.numerator == result2.denominator)
	{
		result2.numerator = 1;
		result2.denominator = 1;
	}
	return result2;
};
Rational Rational::operator -(Rational obj)
{
	Rational result2;
	int m, n;
	m = denominator;
	n = obj.denominator;
	while (m != n)
	{
		if (m < n)
		{
			m = m + denominator;
		}
		else
		{
			n = n + obj.denominator;
		}
	}
	result2.numerator = (m / denominator)*numerator - (m / obj.denominator)*obj.numerator;
	result2.denominator = m;
	if (result2.numerator < 0)
	{
		result2.numerator = -result2.numerator;
	}
	if (result2.numerator < result2.denominator)
	{
		for (int i = result2.numerator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.denominator < result2.numerator)
	{
		for (int i = result2.denominator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.numerator == result2.denominator)
	{
		result2.numerator = 1;
		result2.denominator = 1;
	}
	result2.numerator = -result2.numerator;
	return result2;
}
Rational Rational::operator *(Rational obj)
{
	Rational result2;
	result2.numerator = numerator * obj.numerator;
	result2.denominator = denominator * obj.denominator;
	if (result2.numerator < result2.denominator)
	{
		for (int i = result2.numerator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.denominator < result2.numerator)
	{
		for (int i = result2.denominator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.numerator == result2.denominator)
	{
		result2.numerator = 1;
		result2.denominator = 1;
	}
	return result2;
}
Rational Rational::operator /(Rational obj)                //divide and store
{
	Rational result2;
	result2.numerator = obj.denominator * numerator;
	result2.denominator = obj.numerator* denominator;
	if (result2.numerator < result2.denominator)
	{
		for (int i = result2.numerator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.denominator < result2.numerator)
	{
		for (int i = result2.denominator; i > 0; i--)
		{
			if (result2.numerator%i == 0 && result2.denominator%i == 0)
			{
				result2.numerator = result2.numerator / i;
				result2.denominator = result2.denominator / i;
			}
		}
	}
	if (result2.numerator == result2.denominator)
	{
		result2.numerator = 1;
		result2.denominator = 1;
	}
	return result2;
}; 
bool Rational::operator ==(Rational obj)
{
	if (numerator == obj.numerator && denominator == obj.denominator)
	{
		return true;
	}
	else
		return false;
}
bool Rational::operator !=(Rational obj)
{
	if (numerator != obj.numerator && denominator != obj.denominator)
	{
		return true;
	}
	else
		return false;
}
 
void Rational::reducedForm()
{
	if (numerator < denominator)
	{
		for (int i = numerator; i > 0; i--)
		{
			if (numerator%i == 0 && denominator%i == 0)
			{
				numerator = numerator / i;
				denominator = denominator / i;
			}
		}
	}
	if (denominator < numerator)
	{
		for (int i = denominator; i > 0; i--)
		{
			if (numerator%i == 0 && denominator%i == 0)
			{
				numerator = numerator / i;
				denominator = denominator / i;
			}
		}
	}
	if (numerator == denominator)
	{
		numerator = 1;
		denominator = 1;
	}
	cout << numerator << "/" << denominator << endl;
}
void Rational::floatreducedForm()
{
	if (numerator < denominator)
	{
		for (int i = numerator; i > 0; i--)
		{
			if (numerator%i == 0 && denominator%i == 0)
			{
				numerator = numerator / i;
				denominator = denominator / i;
			}
		}
	}
	if (denominator < numerator)
	{
		for (int i = denominator; i > 0; i--)
		{
			if (numerator%i == 0 && denominator%i == 0)
			{
				numerator = numerator / i;
				denominator = denominator / i;
			}
		}
	}
	if (numerator == denominator)
	{
		numerator = 1;
		denominator = 1;
	}
	float d = numerator / denominator;
	cout << " float = " << d << endl;
}
Rational ::~Rational()
{


}