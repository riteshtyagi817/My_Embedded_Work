CC = g++ -std=c++14
CFLAGS = -c -g -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o distance.o
	$(CC) $(LFLAGS) main.o distance.o

main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) main.cpp	
distance.o: distance.cpp headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) distance.cpp	
clean:
	-rm *.o
	-rm main
run:
	./main
