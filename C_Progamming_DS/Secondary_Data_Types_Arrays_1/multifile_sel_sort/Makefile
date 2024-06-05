#!/bin/bash

selSort: getArray.o displayArray.o selectionSort.o main.o
	gcc -o selSort getArray.o displayArray.o selectionSort.o main.o 
getArray.o: getArray.c headers.h getArray.h
	gcc -c getArray.c headers.h getArray.h 	
displayArray.o: displayArray.c headers.h displayArray.h
	gcc -c displayArray.c headers.h displayArray.h 	
selectionSort.o: selectionSort.c headers.h selectionSort.h
	gcc -c selectionSort.c headers.h selectionSort.h 
main.o: main.c headers.h 
	gcc -c main.c headers.h
clean:
	rm -rf *.o
	rm selSort	
