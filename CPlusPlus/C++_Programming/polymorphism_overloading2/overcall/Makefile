CC = g++ -std=c++14
CFLAGS = -c -Wall -g
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o distmile.o
	$(CC) $(LFLAGS) main.o distmile.o

main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 

distmile.o: distmile.cpp headers.h declarations.h
	$(CC) $(CFLAGS) distmile.cpp 

clean:
	-rm *.o
	-rm main
run:
	./main

