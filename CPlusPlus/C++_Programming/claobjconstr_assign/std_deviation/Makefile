CC = g++ --std=c++14
CFLAGS = -g -Wall -c
LFLAGS = -o
#DEBUG = 
DEBUG = -DDEBUG

main: main.o stddev.o
	$(CC) $(LFLAGS) main main.o stddev.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) main.cpp 
stddev.o: stddev.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) stddev.cpp 

clean:
	-rm *.o
	-rm main
run:
	./main
