CC = g++ -std=c++14
CFLAGS = -g -Wall -c
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o tempdegree.o tempfar.o
	$(CC) $(LFLAGS) main.o tempdegree.o tempfar.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
tempdegree.o: tempdegree.cpp headers.h declarations.h
	$(CC) $(CFLAGS) tempdegree.cpp 
tempfar.o: tempfar.cpp headers.h declarations.h
	$(CC) $(CFLAGS) tempfar.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
