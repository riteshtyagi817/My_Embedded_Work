CC = g++ -std=c++14
CFLAGS = -g -c -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o intvalue.o
	$(CC) $(LFLAGS) main.o intvalue.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
intvalue.o: intvalue.cpp headers.h declarations.h
	$(CC) $(CFLAGS) intvalue.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
