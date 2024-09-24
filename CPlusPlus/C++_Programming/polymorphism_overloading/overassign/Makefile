CC = g++ -std=c++14
CFLAGS = -c -Wall -g
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o distance.o
	$(CC) $(LFLAGS) main.o distance.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
distance.o: distance.cpp headers.h declarations.h
	$(CC) $(CFLAGS) distance.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
