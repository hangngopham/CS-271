#include<iostream>
#include<string>
using namespace std;

class Employee {
	public:
		Employee(string, string, float);
		string getFirstName();
		string getLastName();
		float getMonthlySalary();
		void setFirstName(string);
		void setLastName(string);
		void setMonthlySalary(float);
			
	private:
		string firstName;
		string lastName;
		float monthlySalary;
};
