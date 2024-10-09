CC = gcc 
CFLAGS = -c -Wall -g
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o stack.o
	$(CC) $(LFLAGS) main.o stack.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c 
stack.o: stack.c headers.h declarations.h
	$(CC) $(CFLAGS) stack.c
clean:
	-rm *.o
	-rm main
run:
	./main
