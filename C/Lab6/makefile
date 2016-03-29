all: lab7

lab7: Employee.o EmployeeTest.o
	g++ Employee.o EmployeeTest.o -o lab7

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

EmployeeTest.o: EmployeeTest.cpp Employee.h
	g++ -c EmployeeTest.cpp

clean: 
	rm -rf *.o
