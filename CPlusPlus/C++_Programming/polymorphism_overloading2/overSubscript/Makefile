CC  = g++ -std=c++14
CFLAGS = -c -Wall -g
LFLAGS = -o main
DEBUG = 
#DEBUG = -DDEBUG

main: main.o subscript.o
	$(CC) $(LFLAGS) main.o subscript.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp
subscript.o: subscript.cpp headers.h declarations.h
	$(CC) $(CFLAGS) subscript.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
