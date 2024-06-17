#!/bin.bash
CFLAGS=-c -g
LFLAGS=-o
CC=gcc
demo: main.o declarations.o
	$(CC) $(LFLAGS) demo main.o declarations.o
main.o:	main.c headers.h declarations.h	
	$(CC) $(CFLAGS) main.c
declarations.o:	declarations.c headers.h declarations.h	
	$(CC) $(CFLAGS) declarations.c
clean:
	-rm *.o
	-rm demo
