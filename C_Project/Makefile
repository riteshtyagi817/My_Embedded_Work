#!/bin/bash
CC = gcc
CFLAGS = -c -g
LFLAGS = -o 
DBFLAG = -DDEBUG
mdcaeuit: main.o mainMenu.o
	$(CC) $(LFLAGS) mdcaeuit main.o mainMenu.o
main.o : main.c headers.h
	$(CC) ${CFLAGS} $(DBFLAG) main.c
mainMenu.o : mainMenu.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) mainMenu.c 
clean:
	-rm *.o
	-rm mdcaeuit
	
