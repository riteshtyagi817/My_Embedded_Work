CC = g++
CFLAGS = -c -g -Wall
LFLAGS = -o
#DEBUG = -DDEBUG
DEBUG = 
main: main.o distance.o
	$(CC) $(LFLAGS) main main.o distance.o

main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) main.cpp

distance.o: distance.cpp headers.h declarations.h
	$(CC) $(CFLAGS) distance.cpp

clean:
	-rm *.o
	-rm main
run:
	./main

