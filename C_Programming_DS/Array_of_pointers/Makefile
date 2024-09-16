CC=gcc
FLAGS=-c -g
demo: main.o getArray.o displayArray.o getValues.o
	$(CC)  -o demo main.o getArray.o displayArray.o getValues.o
getArray.o: getArray.c headers.h declarations.h
	${CC} ${FLAGS} getArray.c
main.o: main.c headers.h declarations.h
	${CC} ${FLAGS} main.c
displayArray.o: displayArray.c headers.h declarations.h
	${CC} ${FLAGS} displayArray.c
getValues.o: getValues.c headers.h declarations.h
	${CC} ${FLAGS} getValues.c
clean:
	-rm *.o
	-rm demo
