CC = g++ -std=c++14
CFLAGS = -c -g -Wall
LFLAGS = -o main
#DEBUG = -DDEBUG
DEBUG = 

main: main.o circle.o
	$(CC) $(LFLAGS) main.o circle.o
main.o: main.cpp headers.h declarations.h
	$(CC)  $(CFLAGS) main.cpp 
circle.o: circle.cpp headers.h declarations.h
	$(CC)  $(CFLAGS) circle.cpp 
clean:
	-rm *.o
	-rm main
run:
	./main
