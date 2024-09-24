CC = g++ -std=c++14
CFLAGS = -c -g -Wall
LFLAGS = -o main
#DEBUG = -DDEBUG
DEBUG = 

main: main.o rectangle.o
	$(CC) $(LFLAGS) main.o rectangle.o
main.o: main.cpp headers.h declarations.h
	$(CC)  $(CFLAGS) main.cpp 
rectangle.o: rectangle.cpp headers.h declarations.h
	$(CC)  $(CFLAGS) rectangle.cpp 
clean:
	-rm *.o
	-rm main
run:
	./main
