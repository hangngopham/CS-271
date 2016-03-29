#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class GradeBook {
	public:
		GradeBook(string);

	public:
		void setCourseName(string);
		string getCourseName();
		void displayMessage();

	private:
		string courseName;
};
