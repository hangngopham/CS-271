#include "Date.h"
#include "Invoice.h"
int main() {
// Create 2 or more Date objects
	Date monday;
	Date tuesday(1,2,2016);
	Date wednesday(1,31,2016);
	Date day(2,28,2016);
	Date happyDay(11,30,2016);
	Date saturday(12,31,2016);
	Date sunday(8,31,2016);


	//Test copy constructor
	Date tuesday2(tuesday);
	cout << "tuesday2 is an example of using copy constructor" << endl;
	cout << "Tuesday is: " << endl;
	cout << tuesday << endl;
	cout << "Tuesday2 is: " << endl;	
	cout << tuesday2 << endl;
	
	//Test nextDay() method
	cout << "Before using nextDay(): " << endl;
	cout << saturday << endl;
	saturday.nextDay();
	cout << "After using nextDay() method: " << endl;
	cout << saturday << endl;

}



