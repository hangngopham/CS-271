#include<iostream>
#include<stdexcept>
#include "Date.h"

using namespace std;

int main() {
	// Test default constructor
	Date d1;
	cout << "Using default constructor: " << endl;
	// Test getDay() method
	cout << "Date is " << d1.getDay() << endl;
	// Test getMonth() method
	cout << "Month is " << d1.getMonth() << endl;
	// Test getYear() method
	cout << "Year is " << d1.getYear() << endl;
	
	// Test three parameter constructor
	Date d2(4,5,2016);
	cout << "Using the three parameter constructor: " << endl;
	// Test getDay() method
	cout << "Date is " << d2.getDay() << endl;
	// Test getMonth() method
	cout << "Month is " << d2.getMonth() << endl;
	// Test getYear() method
	cout << "Year is " << d2.getYear() << endl;
	
	// Test setMonth() method
	//Valid case 
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	//cout << "Month is " << d1.getMonth()<< endl; 
	d1.setMonth(12);
	//Invalid cases 1
	cout << "After calling setMonth(-1): ";
	try {
		d1.setMonth(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is " << d1.getMonth()<< endl; // error

	// Invalid cases 2
	cout << "After calling setMonth(13): ";
	try {
		d1.setMonth(13);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << d1.getMonth()<< endl; // error

	// Test setDay() method

	// Valid cases
	cout << "After calling setMonth(1): ";
	try {
		d1.setMonth(1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is " << d1.getMonth()<< endl;

	cout << "After calling setDay(31): ";
	try {
		d1.setDay(31);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
	cout << "Day is " << d1.getDay() << endl;
	//cout << d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear() << endl; 

	// Valid cases
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << d1.getMonth()<< endl;

	cout << "After calling setDay(30): ";
	try {
		d1.setDay(30);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
	cout << "Day is " << d1.getDay() << endl;
	//cout << d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear() << endl; 

	//Invalid cases 1
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(0): ";
	try {
		d1.setDay(0);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
		
 	//Invalid cases 2
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(31): ";
	try {
		d1.setDay(31);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
	//cout << d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear() << endl; 
	//Invalid cases 3
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(32): ";
	try {
		d1.setDay(32);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
	//cout << d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear() << endl; 
	//Invalid cases 4
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change month" << endl;
	}
	cout << "Month is: " + d1.getMonth()<< endl;

	cout << "After calling setDay(-1): ";
	try {
		d1.setDay(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change day" << endl;
	}
	//cout << d1.getMonth() << "/" << d1.getDay()<< "/" << d1.getYear() << endl; 

	
	//Test setYear() methodt1
	//Valid cases
	cout << "After calling setYear(2018): ";
	try {
		d1.setYear(2018);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change year" << endl;
	}
	cout << d1.getYear()<< endl;

	//Invalid cases
	cout << "After calling setYear(-1): ";
	try {
		d1.setYear(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred while trying to change year" << endl;
	}
	cout << d1.getYear()<< endl;

}
