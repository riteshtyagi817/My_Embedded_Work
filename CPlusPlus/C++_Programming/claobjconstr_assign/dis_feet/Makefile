CC = g++ 
CFLAG = -g -Wall -c
LFLAG = -o 
DEBUG = -DDEBUG

DistFeet: main.o distfeet.o
	$(CC) $(LFLAG) DistFeet main.o distfeet.o

main.o: main.cpp headers.h declarations.h
	$(CC) $(CFLAG) $(DEBUG) main.cpp 

distfeet.o: distfeet.cpp headers.h declarations.h
	${CC} ${CFLAG} ${DEBUG}  distfeet.cpp 
clean:
	-rm *.o
	-rm DistFeet
