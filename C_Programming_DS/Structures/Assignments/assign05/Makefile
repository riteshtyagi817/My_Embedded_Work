CC = gcc 
CFLAGS = -g -c -Wall
LFLAGS = -o

main:  treenode.o main.o
	$(CC) $(LFLAGS) main treenode.o main.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c
treenode.o: treenode.c headers.h declarations.h
	$(CC) $(CFLAGS) treenode.c
clean:
	-rm *.o
	-rm main
run:
	./main
