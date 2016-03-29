#include<iostream>
#include "Employee.h"

using namespace std;

int main() {
	Employee e1("Peter", "Nguyen", 5000);
	cout << e1.getFirstName() << " " << e1.getLastName() << " " << e1.getMonthlySalary()*12 << endl; 
	Employee e2("Ana", "Cao", 6000);
	cout << e2.getFirstName() << " " << e2.getLastName() << " " << e2.getMonthlySalary()*12 << endl; 
	cout << "After giving each employee 10 percent raise in salary: " << endl;
	cout << e1.getFirstName() << " " << e1.getLastName() << " " << (e1.getMonthlySalary()*110/100)*12 << endl; 
	cout << e2.getFirstName() << " " << e2.getLastName() << " " << (e2.getMonthlySalary()*110/100)*12 << endl; 
	
	e1.setFirstName("Lisa");
	cout << "After calling setFirstName() mutator method for object e1: ";
	cout << e1.getFirstName() << endl;

	e1.setLastName("Ha");
	cout << "After calling setLastName() mutator method for object e1: ";
	cout << e1.getLastName() << endl;

	e1.setMonthlySalary(9000);
	cout << "After calling setMonthlySalary() mutator method for object e1: ";
	cout << e1.getMonthlySalary() << endl;
}
