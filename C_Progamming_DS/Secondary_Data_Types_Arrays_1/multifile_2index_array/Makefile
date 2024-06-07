#!/bin/bash
demo: main.o getArray.o getValues.o displayArray.o 
	gcc -o demo main.o getArray.o getValues.o displayArray.o
getArray.o: getArray.c headers.h declarations.h
	gcc -c getArray.c 
getValues.o: getValues.c headers.h declarations.h
	gcc -c getValues.c 
dispalyArray.o: displayArray.c headers.h declarations.h
	gcc -c displayArray.c 
clean:
	rm *.o 
	rm demo 
