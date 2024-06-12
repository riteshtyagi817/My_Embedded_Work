demo: main.o getArray.o displayArray.o getValues.o
	gcc -o demo main.o getArray.o displayArray.o getValues.o
getArray.o: getArray.c headers.h declarations.h
	gcc -c getArray.c
main.o: main.c headers.h declarations.h
	gcc -c main.c
displayArray.o: displayArray.c headers.h declarations.h
	gcc -c displayArray.c
getValues.o: getValues.c headers.h declarations.h
	gcc -c getValues.c
clean:
	-rm *.o
	-rm demo
