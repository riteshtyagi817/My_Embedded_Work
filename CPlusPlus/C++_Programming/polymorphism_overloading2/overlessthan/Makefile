CC = g++ -std=c++14
CFLAGS = -c -g -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o time.o
	$(CC) $(LFLAGS) main.o time.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 
time.o: time.cpp headers.h declarations.h
	$(CC) $(CFLAGS) time.cpp 
clean:
	-rm *.o
	-rm main
run:
	./main
