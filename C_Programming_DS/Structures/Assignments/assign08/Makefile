CC = gcc
CFLAGS = -g -c -Wall
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o bufferData.o
	$(CC) $(LFLAGS) main.o bufferData.o
main.o: main.c headers.h declarations.h
	$(CC) $(CFLAGS) main.c 
bufferData.o: bufferData.c headers.h declarations.h
	$(CC) $(CFLAGS) bufferData.c 
clean:
	-rm *.o
	-rm main
run:
	./main
