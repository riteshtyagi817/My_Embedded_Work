demo: main.o getRows.o printPattern.o
	gcc -o demo main.o getRows.o printPattern.o
getRows.o: getRows.c headers.h declarations.h
	gcc -c getRows.c
main.o: main.c headers.h declarations.h
	gcc -c main.c
printPattern.o: printPattern.c headers.h declarations.h
	gcc -c printPattern.c
clean:
	-rm *.o
	-rm demo
