#include <iostream>
#include "Rational.h"
using namespace std;
 
int main()
{
	Rational objA(7, 6);
	Rational objB(3, 4);
	Rational objC = objA + objB;
	Rational objD = objA - objB;
	Rational objE = objA * objB;
	Rational objF = objA / objB;
	 
	 
	cout << "-----------------------------Rational numbers---------------------------" << endl;
	cout << " Rational No.1 : ";
	objA.reducedForm();
	cout << " Rational No.2 : ";
	objB.reducedForm();
	cout << endl << endl;

	cout << "---------------------Arithmatic Operations-------------------------" << endl;
	cout << "1-  Add : ";
	objC.reducedForm();
	cout << "2-  Subtraction : ";
	objD.reducedForm();
	cout << "3-  Divide : ";
	objF.reducedForm();
	cout << "4-  Multiplication : ";
	objE.reducedForm();

	cout << endl;
	 
	system("Pause");
	return 0;
}