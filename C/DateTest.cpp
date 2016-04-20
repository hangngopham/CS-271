#include "Date.h"
#include "Invoice.h"

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
       
        try{
		Date d2(-1,3,2016);
		//cout << "Using the three parameter constructor: " << endl;
		// Test getDay() method
          	cout << "Date is " << d2.getDay() << endl;
		// Test getMonth() method
		cout << "Month is " << d2.getMonth() << endl;
		// Test getYear() method
		cout << "Year is " << d2.getYear() << endl;
         }
         catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	
	
	
       }
	
	// Test setMonth() method
	//Valid case 
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}

	d1.setMonth(12);
	//Invalid cases 1
	cout << "After calling setMonth(-1): ";
	try {
		d1.setMonth(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is " << d1.getMonth()<< endl; // error

	// Invalid cases 2
	cout << "After calling setMonth(13): ";
	try {
		d1.setMonth(13);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << d1.getMonth()<< endl; // error

	// Test setDay() method

	// Valid cases
	cout << "After calling setMonth(1): ";
	try {
		d1.setMonth(1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is " << d1.getMonth()<< endl;

	cout << "After calling setDay(31): ";
	try {
		d1.setDay(31);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Day is " << d1.getDay() << endl;

	// Valid cases
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurre: " << e.what() << endl;
	}
	cout << d1.getMonth()<< endl;

	cout << "After calling setDay(30): ";
	try {
		d1.setDay(30);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Day is " << d1.getDay() << endl;

	//Invalid cases 1
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(0): ";
	try {
		d1.setDay(0);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
		
 	//Invalid cases 2
	cout << "After calling setMonth(4): ";
	try {
		d1.setMonth(4);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(31): ";
	try {
		d1.setDay(31);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}

	//Invalid cases 3
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is: " << d1.getMonth()<< endl;

	cout << "After calling setDay(32): ";
	try {
		d1.setDay(32);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}

	//Invalid cases 4
	cout << "After calling setMonth(11): ";
	try {
		d1.setMonth(11);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << "Month is: " + d1.getMonth()<< endl;

	cout << "After calling setDay(-1): ";
	try {
		d1.setDay(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}


	
	//Test setYear() methodt1
	//Valid cases
	cout << "After calling setYear(2018): ";
	try {
		d1.setYear(2018);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << d1.getYear()<< endl;

	//Invalid cases
	cout << "After calling setYear(-1): ";
	try {
		d1.setYear(-1);
	}
	catch(invalid_argument &e) {
		cout << "Exception occurred: " << e.what() << endl;
	}
	cout << d1.getYear()<< endl;
        cout << d1;
}
