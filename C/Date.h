#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<iomanip>
#include<stdexcept>

using namespace std;


class Date {
	public:
		Date(int = 1, int = 1, int= 2016);
		Date(const Date &); // a copy constructor

		bool isLeapYear(int);
		int getMonth();
		int getDay();
		int getYear();

		void setMonth(int);
		void setDay(int);
		void setYear(int);
		void nextDay(); // increment the day, ajust the month and year as needed
		friend ostream &operator<<(ostream &, const Date &); // overloads thre stream insertion operator


	private:
		int month;
		int day;
		int year;

		static const int days[];
};
#endif
