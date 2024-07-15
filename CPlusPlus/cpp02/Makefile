CC = g++ -g 
DEBUG = -DDEBUG
CFLAG = -c
LFLAG = -o

main: main.o Distance.o
	$(CC) $(LFLAG) main main.o Distance.o

main.o: main.cpp headers.h Distance.h
	$(CC) $(CFLAG) $(DEBUG) main.cpp


HelloWorld.o: HelloWorld.cpp headers.h Distance.h
	$(CC) $(CFLAG) $(DEBUG) Distance.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
