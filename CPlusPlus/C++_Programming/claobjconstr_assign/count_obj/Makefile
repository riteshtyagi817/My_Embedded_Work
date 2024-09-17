CC = g++
CFLAGS = -g -c -Wall
LFLAGS = -o 
DEBUG = 
#DEBUG = -DDEBUG

main: main.o test.o
	$(CC) $(LFLAGS) main main.o test.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) main.cpp
test.o: test.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) test.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
