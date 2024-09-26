CC = g++ -std=c++14
CFLAGS = -g -Wall -c
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o tempdegree.o tempfar.o
	$(CC) $(LFLAGS) main.o tempdegree.o tempfar.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c
tempdegree.o: tempdegree.c headers.h declarations.h
	$(CC) $(CFLAGS) tempdegree.c 
tempfar.o: tempfar.c headers.h declarations.h
	$(CC) $(CFLAGS) tempfar.c

clean:
	-rm *.o
	-rm main
run:
	./main
