CC = g++ -std=c++14
CFLAGS = -c -Wall -g
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG
main: main.o square.o
	$(CC) $(LFLAGS) main.o square.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
square.o: square.cpp headers.h declarations.h
	$(CC) $(CFLAGS) square.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
