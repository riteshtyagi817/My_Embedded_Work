CC = g++
CFLAGS = -g -Wall -c
LFLAGS = -o 
DBG = 
#DBG = -DDEBUG

main: main.o quadroots.o
	$(CC) $(LFLAGS) main main.o quadroots.o
main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAGS) main.cpp 
quadroots.o: quadroots.cpp headers.h declarations.h
	$(CC) $(CFLAGS) quadroots.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
