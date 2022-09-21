CC = g++
CFLAGS = -Wall -g
Target = otokar_case_3
main: main.o LRUCache.o
	$(CC) $(CFLAGS) -o $(Target) main.o LRUCache.o
  
main.o: main.cpp LRUCache.h 
	$(CC) $(CFLAGS) -c main.cpp
 
LRUCache.o: LRUCache.h 

clean:
	$(RM) *.o $(Target)
