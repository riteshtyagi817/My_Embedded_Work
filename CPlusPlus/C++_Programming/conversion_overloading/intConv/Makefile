CC = g++ -std=c++14
CFLAGS = -g -c -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o charvalue.o
	$(CC) $(LFLAGS) main.o charvalue.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
intvalue.o: charvalue.cpp headers.h declarations.h
	$(CC) $(CFLAGS) charvalue.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
