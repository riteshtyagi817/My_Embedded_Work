CC = g++
CFLAGS = -g -Wall -c
LFLAGS = -o

main: main.o sample.o
	$(CC) $(LFLAGS) main main.o sample.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
sample.o: sample.cpp headers.h declarations.h
	$(CC) $(CFLAGS) sample.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
