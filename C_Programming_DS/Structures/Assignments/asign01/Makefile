CC = gcc 
CFLAGS = -g -c -Wall
LFLAGS = -o

main:  main.o
	$(CC) $(LFLAGS) main main.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
