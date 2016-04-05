all: lab8

lab8: Date.o DateTest.o
	g++ -o lab8 Date.o DateTest.o

Date.o: Date.h Date.cpp
	g++ -c Date.cpp

DateTest.o: Date.h DateTest.cpp
	g++ -c DateTest.cpp

clean: 
	rm -rf *.o
