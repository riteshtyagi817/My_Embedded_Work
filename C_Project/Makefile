#!/bin/bash
CC = gcc
CFLAGS = -c -g
LFLAGS = -o 
DBFLAG = -DDEBUG
mdcaeuit: main.o
	$(CC) $(LFLAGS) mdcaeuit main.o
main.o : main.c headers.h
	$(CC) ${CFLAGS} $(DBFLAG) main.c
clean:
	-rm *.o
	-rm mdcaeuit
	
