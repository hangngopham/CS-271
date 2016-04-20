#include "Date.h"

const int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(int m, int d, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);
}

Date::Date(const Date &d) {
	setMonth(d.month);
	setDay(d.day);
	setYear(d.year);
}

bool Date::isLeapYear(int year) {
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
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
	if(m >= 1 && m <= 12) {
		month = m;
	}
	else {
		throw invalid_argument("Month must be between 1 and 12");
	}
}

void Date::setDay(int d) {
	int lastDay = days[month - 1];

	if(month == 2 && isLeapYear(year)) {
		lastDay = 29;
	}

	if(d >= 1 && d <= lastDay) {
		day = d;
	}
	else {
		throw invalid_argument("Day must be between 1 and 28 or 29 or 30 or 31");
	}	
}

void Date::setYear(int y) {
	if(y > 0) {
		year = y;
	}
	else {
		throw invalid_argument("Year must be positive");
	}
}

void Date::nextDay() {
	int last = days[month - 1];
	
	if(month == 2 && isLeapYear(year)) {
		last = 29;
	}
	
	if(day >= 1 && day < last) {
		day = day + 1;
	}
	else if(day == last) {
		if(month >= 1 && month < 12) {
			day = 1;
			month = month + 1;
		}
		else if(month == 12) {
			day = 1;
			month = 1;
			year = year + 1;
		}
	}
}



ostream &operator<<(ostream &out, const Date &d) {
	out <<setfill('0')<< setw(2) << d.month << "/" << setw(2) << d.day << "/" << setw(4) << d.year;
	return out;
}



