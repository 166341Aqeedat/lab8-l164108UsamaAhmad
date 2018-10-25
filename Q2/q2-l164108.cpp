#include<iostream>
#include"enrollment.h"
using namespace std;


int main()
{
	//Task 1
	enrollment computer_programming;
	computer_programming.input();

	//Task 2
	enrollment cp_lab(computer_programming);

	computer_programming.generateAttendanceSheet();

	//task 3
	computer_programming.insertinOrder(45);

	//task4
	cout << "----------------------Enrollment in Computer programming class------------------" << endl;
	computer_programming.print();
	cout << "----------------------Enrollment in Cp_lab--------------------------------------" << endl;
	cp_lab.print();

	//task 5
	computer_programming.testcopyconstructor(cp_lab);
	cout << "---------------New Roll numbers of students in Computer programming class-----------" << endl;
	computer_programming.print();
	system("Pause");
	return 0;
}