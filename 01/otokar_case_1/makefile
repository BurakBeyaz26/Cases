CC = g++
CFLAGS = -Wall -g
Target = otokar_case_1
main: main.o Professor.o Student.o ErrorException.o
	$(CC) $(CFLAGS) -o $(Target) main.o Professor.o Student.o ErrorException.o
  
main.o: main.cpp Person.h Professor.h Student.h ErrorException.h
	$(CC) $(CFLAGS) -c main.cpp
 
Person.o: Person.h ErrorException.h
 
Professor.o: Professor.h Person.h ErrorException.h

Student.o: Student.h Person.h ErrorException.h

ErrorException.o: ErrorException.h

clean:
	$(RM) *.o $(Target)
