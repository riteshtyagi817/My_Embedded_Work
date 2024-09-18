CC = gcc 
CFLAGS = -g -c -Wall
LFLAGS = -o

main:  main.o
	$(CC) $(LFLAGS) main main.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c

clean:
	-rm *.o
	-rm main
run:
	./main
