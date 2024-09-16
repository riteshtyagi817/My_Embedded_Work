#!/bin/bash
CC=gcc
CFLAGS=-c -g
LFLAGS=-o
demo: main.o 
	$(CC) $(LFLAGS) demo main.o
main.o: main.c headers.h
	$(CC) $(CFLAGS) main.c
clean:
	-rm *.o
	-rm demo
