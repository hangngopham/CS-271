#include<iostream>
#include<stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int m, int d, int y) {
        //cout << "M: " << m << " D: " << d << " Y: " << y << endl;
	setMonth(m);
	setDay(d);
	setYear(y);
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int Date::getYear() {
	return year;
}

void Date::setMonth(int m) {
        //cout << "Input month " << m << endl;
	if(m >= 1 && m <= 12) {
		month = m;
	}
	else {
		throw invalid_argument("month must be between 1 and 12");
	}
}

void Date::setDay(int d) {
	if(month == 2 || month == 4 || month == 6 || month == 8 || month == 10 || month == 12) {
		if(d >= 1 && d <= 30) {
			day = d;
		}
		else {
			throw invalid_argument("day must be between 1 and 31");
		}
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11) {
		if(d >= 1 && d <= 31) {
			day = d;
		}
		else {
			throw invalid_argument("day must be between 1 and 31");
		}
	}
	
}

void Date::setYear(int y) {
	if(y > 0) {
		year = y;
	}
	else {
		throw invalid_argument("year must be positive");
	}
}



