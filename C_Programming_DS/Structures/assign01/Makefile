CC = gcc 
CFLAGS = -g -c 
DBG = -DDEBUG
LFLAGS = -o

demo: main.o getDistance.o getSum.o display.o
	${CC} ${LFLAGS} demo main.o getDistance.o getSum.o display.o

main.o: main.c headers.h declarations.h
	${CC} ${CFLAGS} ${DBG} main.c 


getDistance.o: getDistance.c headers.h declarations.h
	${CC} ${CFLAGS} ${DBG} getDistance.c 


getSum.o: getSum.c headers.h declarations.h
	${CC} ${CFLAGS} ${DBG} getSum.c

display.o: display.c headers.h declarations.h
	${CC} ${CFLAGS} ${DBG} display.c

clean:
	-rm *.o
	-rm demo
run: 	
	./demo
