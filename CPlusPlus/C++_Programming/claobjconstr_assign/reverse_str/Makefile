CC = g++ --std=c++14
CFLAGS = -g -Wall -c
LFLAGS = -o
DEBUG = 
#DEBUG = -DDEBUG

main: main.o reverse.o
	$(CC) $(LFLAGS) main main.o reverse.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 
reverse.o: reverse.cpp headers.h declarations.h
	$(CC) $(CFLAGS) reverse.cpp
clean:
	-rm *.o
	-rm main
run:
	./main	
