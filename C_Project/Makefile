#!/bin/bash
CC = gcc
CFLAGS = -c -g
LFLAGS = -o 
DBFLAG = -DDEBUG
mdcaeuit : main.o init.o mainMenu.o compression.o openFile.o compressionStats.o deCompression.o deCompressionStats.o exitProgram.o
	$(CC) $(LFLAGS) mdcaeuit main.o init.o mainMenu.o compression.o openFile.o compressionStats.o deCompression.o deCompressionStats.o exitProgram.o
main.o : main.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) main.c
init.o : init.c 
	$(CC) ${CFLAGS} $(DBFLAG) init.c
mainMenu.o : mainMenu.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) mainMenu.c 
compression.o : compression.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) compression.c
openFile.o : openFile.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) openFile.c
compressionStats.o : compressionStats.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) compressionStats.c
deCompression.o : deCompression.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) deCompression.c
deCompressionStats.o : deCompressionStats.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) deCompressionStats.c
exitProgram.o : exitProgram.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) exitProgram.c
run:
	./mdcaeuit
clean:
	-rm *.o
	-rm mdcaeuit
	
