CC = g++
CFLAGS = -g -Wall -c
LFLAGS = -o 

DEBUG = 
#DEBUG = -DDEBUG

main: main.o convert.o
	$(CC) $(LFLAGS) main main.o convert.o

main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 

convert.o: convert.cpp headers.h declarations.h
	$(CC) $(CFLAGS) convert.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
