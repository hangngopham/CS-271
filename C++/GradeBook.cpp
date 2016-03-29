#include<iostream>
#include "GradeBook.h"

using namespace std;

GradeBook:: GradeBook(string name) {
	setCourseName(name);
}

void GradeBook::setCourseName(string name) {
	if(name.length() <= 25) {	
		courseName = name;
	}
	else {
		courseName = name.substr(0,25);
		cout << "Name " << name << " exceeds maximum length." << endl; 
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to " << courseName << " " << endl;
}
