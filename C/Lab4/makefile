all: lab4

lab4: arrayfunctions.o lab4.o
	gcc arrayfunctions.o lab4.o -o lab4 -lm

lab4.o: lab4.c arrayfunctions.h
	gcc -c lab4.c

arrayfunctions.o: arrayfunctions.c arrayfunctions.h
	gcc -c arrayfunctions.c

clean:
	rm -rf *.o

