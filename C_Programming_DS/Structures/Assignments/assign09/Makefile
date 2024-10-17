CC = gcc
CFLAGS = -c -g -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o dmatrix.o
	$(CC) $(LFLAGS) main.o dmatrix.o
main.o: main.c declarations.h headers.h
	$(CC) $(CFLAGS) main.c 
dmatrix.o: dmatrix.c declarations.h headers.h
	$(CC) $(CFLAGS) dmatrix.c 
clean:
	-rm *.o
	-rm main
run:
	./main
