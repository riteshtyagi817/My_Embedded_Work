CC = g++ -std=c++14
CFLAGS = -g -c -Wall
LFLAGS = -o 
DEBUG = 
#DEBUG = -DDEBUG

main: main.o timediff.o
	$(CC) $(LFLAGS)  main main.o timediff.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
timediff.o: timediff.cpp headers.h declarations.h
	$(CC) $(CFLAGS) timediff.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
