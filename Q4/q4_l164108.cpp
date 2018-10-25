# include<iostream>
#include"Matrix.h"
using namespace std;

int main()
{
	Matrix matA(2, 2);
	matA.input();
	matA.print();
	cout << "TRANSPOSE OF Matrix : " << endl;
	Matrix result = matA.transpose(matA);
	result .display();

	Matrix matB(2, 2);
	matB.input();
	matB.print();
	cout << " TRANSPOSE OF Matrix : " << endl;
	Matrix result1 = matB.transpose(matB);
	result1.display();

	cout << " Sum of ";
	Matrix sum = matA + matB;
	sum.print();
	cout << endl;

	cout << " Subtraction of ";
	Matrix minus = matA - matB;
	minus.print();
	cout << endl;

	cout << " Multiplication of ";
	Matrix multiply = matA * matB;
	multiply.print();
	cout << endl;

	if (matA == matB)
	{
		cout << "  Equal Matrices " << endl;
	}
	else
	{
		cout << "  Not Equal Matrices" << endl;
	}
	 
	cout << "---------------------------Copy Constructor---------------------------"<<endl;
	Matrix obj1 = matA;
	obj1.print();

	system("Pause");
	return 0;
}

 
 