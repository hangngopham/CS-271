#include<iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string first, string last, float salary) {
	setFirstName(first);
	setLastName(last);
	setMonthlySalary(salary);
}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

float Employee::getMonthlySalary() {
	return monthlySalary;
}

void Employee::setFirstName(string first) {
	firstName = first;
}

void Employee::setLastName(string last) {
	lastName = last;
}

void Employee::setMonthlySalary(float salary) {
	if(salary < 0) {
		monthlySalary = 0;
	}
	else {
		monthlySalary = salary;	
	}
	
}
