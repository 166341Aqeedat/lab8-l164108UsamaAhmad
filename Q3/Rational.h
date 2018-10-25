#pragma once
class Rational
{
private:
	int numerator;
	int denominator;
public:
	//Function prototypes
	Rational();							//default constructor
	Rational(int n, int d);				//parameterized constructor
	void reducedForm();					//function to reduce fractional values
	void floatreducedForm();			//function for float form
	Rational operator /(Rational);      //operator Overloading for /
	Rational operator +(Rational);      //operator Overloading for +
	Rational operator *(Rational);      //operator Overloading for *
	Rational operator -(Rational);      //operator Overloading for -
	bool operator ==(Rational);         //operator Overloading for ==
	bool operator !=(Rational);         //operator Overloading for !=
	~Rational();
};
