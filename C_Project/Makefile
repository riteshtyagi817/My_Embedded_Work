#!/bin/bash
CC = gcc
CFLAGS = -c -g
LFLAGS = -o 
DBFLAG = -DDEBUG
#DBFLAG = 
mdcaeuit : main.o init.o mainMenu.o compression.o openFile.o compressionStats.o deCompression.o deCompressionStats.o exitProgram.o createMArray.o isUnique.o cMaxBits.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o compression8.o
	$(CC) $(LFLAGS) mdcaeuit main.o init.o mainMenu.o compression.o openFile.o compressionStats.o deCompression.o deCompressionStats.o exitProgram.o createMArray.o isUnique.o cMaxBits.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o compression8.o

compression2.o : compression2.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression2.c
compression3.o : compression3.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression3.c
compression4.o : compression4.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression4.c
compression5.o : compression5.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression5.c
compression6.o : compression6.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression6.c
compression7.o : compression7.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression7.c
compression8.o : compression8.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression8.c

main.o : main.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) main.c
init.o : init.c 
	$(CC) ${CFLAGS} $(DBFLAG) init.c
mainMenu.o : mainMenu.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) mainMenu.c 
compression.o : compression.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compression.c
openFile.o : openFile.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) openFile.c
compressionStats.o : compressionStats.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) compressionStats.c
deCompression.o : deCompression.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) deCompression.c
deCompressionStats.o : deCompressionStats.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) deCompressionStats.c
exitProgram.o : exitProgram.c headers.h declarations.h
	$(CC) ${CFLAGS} $(DBFLAG) exitProgram.c
createMArray.o : createMArray.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) createMArray.c
isUnique.o : isUnique.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) isUnique.c
cMaxBits.o : cMaxBits.c headers.h declarations.h dataStructures.h
	$(CC) ${CFLAGS} $(DBFLAG) cMaxBits.c
run:
	./mdcaeuit
clean:
	-rm *.o
	-rm mdcaeuit
	
