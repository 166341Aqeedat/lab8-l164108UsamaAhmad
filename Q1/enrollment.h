#pragma once
class enrollment
{ 
	private:
		int *rollnumbers; //pointer to an int array that stores the roll numbers
		int length; //current number of students enrolled
		int maxSize; //total capacity of the class
	public:
		 enrollment(int maxSize = 10);		 //create array of the size specified by the paramerter "size" use this pointer in the constructor to assign values
		 void input();
		 void print() const;					//function to print roll numbers of students
		 void generateAttendanceSheet();		//Arrange the rollnumbers in Ascending order
		 void insertinOrder(int rollnumber);	//function to insert the roll number in order in the array	 	
		 void testcopyconstructor(enrollment obj);   //copy constuctor adding +1 in rollnumbers
		 bool alreadyExists(int *rollnumbers, int x);    //function to check if roll numbers already exists for all input
		 bool alreadyExists2(int *rollnumbers, int x);		//function to check roll number in insertinOrder Function
	   	~enrollment();
		enrollment(const enrollment& obj);

};

