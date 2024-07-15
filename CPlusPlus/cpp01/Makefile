CC = g++ -g 
DEBUG = -DDEBUG
CFLAG = -c
LFLAG = -o

main: main.o HelloWorld.o
	$(CC) $(LFLAG) main main.o HelloWorld.o

main.o: main.cpp headers.h HelloWorld.h
	$(CC) $(CFLAG) $(DEBUG) main.cpp


HelloWorld.o: HelloWorld.cpp headers.h HelloWorld.h
	$(CC) $(CFLAG) $(DEBUG) HelloWorld.cpp

clean:
	-rm *.o
	-rm main
run:
	./main
