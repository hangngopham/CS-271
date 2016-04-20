all: orders

orders: Invoice.o Date.o Orders.o
	g++ -o orders Invoice.o Date.o Orders.o

Orders.o: Orders.cpp Invoice.h Date.h
	g++ -c Orders.cpp

Date.o: Date.h Date.cpp
	g++ -c Date.cpp

Invoice.o: Invoice.h Invoice.cpp Date.h Date.cpp
	g++ -c Invoice.cpp

clean: 
	rm -rf *.o
