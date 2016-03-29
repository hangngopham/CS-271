all: firstprogram

firstprogram: GradeBook.o TestProgram.o
	g++ GradeBook.o TestProgram.o -o firstprogram

GradeBook.o: GradeBook.cpp GradeBook.h
	g++ -c GradeBook.cpp

TestProgram.o: TestProgram.cpp GradeBook.h
	g++ -c TestProgram.cpp

clean: 
	rm -rf *.o
