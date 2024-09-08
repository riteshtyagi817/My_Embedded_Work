CC = g++ 
CLAG = -c -g -Wall
LFLAG = -o
#DEBUG = -DDEBUG
DEBUG = 
circle: main.o Circle.o
	$(CC) $(LFLAG) circle main.o Circle.o

Circle.o: Circle.cpp headers.h declarations.h
	$(CC) $(CLAG) $(DEBUG) Circle.cpp 

main.o: main.cpp headers.h declarations.h
	$(CC) $(CLAG) $(DEBUG) main.cpp 

clean:
	-rm *.o
	-rm circle
run:
	./circle

