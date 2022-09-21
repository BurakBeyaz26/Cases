CC = g++
CFLAGS = -Wall -g
Target = otokar_case_2
main: main.o queue.o
	$(CC) $(CFLAGS) -o $(Target) main.o queue.o
  
main.o: main.cpp queue.h 
	$(CC) $(CFLAGS) -c main.cpp
 
queue.o: queue.h 

clean:
	$(RM) *.o $(Target)
