CC = g++ -std=c++14
CFLAGS = -c -g -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG
main: main.o streamover.o
	$(CC) $(LFLAGS) main.o streamover.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 
streamover.o: streamover.cpp headers.h declarations.h
	$(CC) $(CFLAGS) streamover.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
