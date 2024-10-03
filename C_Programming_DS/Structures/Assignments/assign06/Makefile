CC = gcc -g -Wall 
CFLAGS = -c 
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o
	$(CC) $(LFLAGS) main.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c
clean:
	-rm *.o
	-rm main
run:
	./main
