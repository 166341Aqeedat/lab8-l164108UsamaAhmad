#include "enrollment.h"
#include <iostream>
using namespace std;


enrollment::enrollment(int maxSize)
{
	rollnumbers = new int[maxSize];
	this->maxSize = maxSize;
	this->length = 0;
}
enrollment::enrollment(const enrollment& obj)
{
	this->maxSize = obj.maxSize;
	this->length = obj.length;
	this->rollnumbers = new int[maxSize];
	for (int i = 0; i < length; i++)
	{
		this->rollnumbers[i] = obj.rollnumbers[i];
	}
}
void enrollment::input()
{
	bool check = false;
	cout << "Enter total number of students enrolled : ";
	cin >> length;
	int x, j = 1;
	cout << "Enter Roll number of enrolled all Students :- " << endl;
	for (int i = 0; i < length; i++)
	{
		cin >> rollnumbers[i];
		x = rollnumbers[i];
		check = alreadyExists(rollnumbers, x);
		while (check == true)
		{
			i--;
			cout << "Enter Roll number again : ";
			cin >> rollnumbers[i];
			x = rollnumbers[i];

			check = false;
			check = alreadyExists(rollnumbers, x);
			if (check == true)
			{
				i++;
			}
		}
	}
}
bool enrollment::alreadyExists(int *rollnumbers, int x)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (rollnumbers[i] == x)
		{
			count++;
		}

	}
	if (count > 1)
	{
		cout << "The Roll number "<< x <<" already exists .Please try again" << endl;
		return true;
	}
}
bool enrollment::alreadyExists2(int *rollnumbers, int x)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (rollnumbers[i] == x)
		{
			count++;
		}

	}
	if (count >= 1)
	{
		cout << "Roll number already exists .Please try again" << endl;
		return true;
	}
	else
		return false;
}

void enrollment::print() const
{
	cout << "Roll numbers of enrolled students :- " << endl;
	for (int i = 0; i < length; i++)
		cout << rollnumbers[i] << endl;
}

void enrollment::generateAttendanceSheet()
{

	cout << "----------------------Student Sheet in ascending Order-------------------------" << endl;
	int temp;

	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (rollnumbers[i] > rollnumbers[j])
			{
				temp = rollnumbers[i];
				rollnumbers[i] = rollnumbers[j];
				rollnumbers[j] = temp;
			}
		}
	}

	for (int i = 0; i < length; i++)
		cout << rollnumbers[i] << " ";

	cout << endl << endl << endl;
}

void enrollment::insertinOrder(int rollnumber)
{
	cout << "--------------------Inserting a Roll number in Student Sheet--------------------" << endl;

	if (length >= maxSize)
	{
		cout << "Class is already Full" << endl;
	}
	else
	{
		bool check1;
		check1 = alreadyExists2(rollnumbers, rollnumber);
			if(check1 == false)
			{
				rollnumbers[length] = rollnumber;
				length++;
				cout << "New Students enrollment sheet :" << endl;
				for (int i = 0; i < length; i++)
					cout << rollnumbers[i] << " ";
			}
		 
	}
	cout << endl;
}
void enrollment::testcopyconstructor(enrollment obj)
{
	cout << "-------------------------Testing Copy Constructor-----------------------------" << endl;
	for (int i = 0; i < this->length; i++)
	{
		this->rollnumbers[i] += 1;
	}
}

enrollment::~enrollment()
{
	delete[]rollnumbers;
}
