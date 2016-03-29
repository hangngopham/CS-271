#include<iostream>
#include<iomanip>
#include "GradeBook.h"

int main() {
	string myCourse;
	GradeBook myGradeBook("CS271");

	cout << "Initial course name is " << myGradeBook.getCourseName() << endl;

	cout << "\nPlease enter the course name: " << endl;
	//cin >> myCourse;
	getline(cin, myCourse); // read a course name with a blank	
	myGradeBook.setCourseName(myCourse);

	cout << endl; // print a blank line
	myGradeBook.displayMessage();
}
