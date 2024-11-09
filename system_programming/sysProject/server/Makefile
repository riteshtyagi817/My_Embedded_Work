CC = gcc
CLFAGS = -g -c
LFLAGS = -o 
DEBUG =
#DEBUG = -DDEBUG

server: server.o createInfra.o
	$(CC) $(LFLAGS) server server.o createInfra.o
server.o: server.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) server.c
createInfra.o: createInfra.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) createInfra.c

run:
	./server
clean:
	-rm *.o
	-rm server
