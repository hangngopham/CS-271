#ifndef DATE_H
#define DATE_H

class Date {
	public:
		Date(int = 1, int = 1, int= 2016);
		int getMonth();
		int getDay();
		int getYear();
		void setMonth(int);
		void setDay(int);
		void setYear(int);

	private:
		int month;
		int day;
		int year;
};
#endif
