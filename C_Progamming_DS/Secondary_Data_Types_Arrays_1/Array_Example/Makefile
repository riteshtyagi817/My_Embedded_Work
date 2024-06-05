#!/bin/bash
arraydemo: getArray.o getValues.o displayArray.o main.o 
	gcc -o arraydemo getArray.o getValues.o displayArray.o main.o

getArray.o: getArray.c headers.h declarations.h
	gcc -c getArray.c	

getValues.o: getValues.c headers.h declarations.h
	gcc -c getValues.c	

displayArray.o: displayArray.c headers.h declarations.h
	gcc -c displayArray.c	

main.o: main.c headers.h declarations.h
	gcc -c main.c	

clean:
	rm *.o
	rm arraydemo
