CC = gcc -g
CFLAGS = -c 
LFLAGS = -o server

server: server.o threadClient.o createInfra.o
	$(CC) $(LFLAGS) server.o threadClient.o createInfra.o
server.o: server.c declarations.h
	$(CC) $(CFLAGS) server.c
threadClient.o: threadClient.c declarations.h
	$(CC) $(CFLAGS) threadClient.c
createInfra.o: createInfra.c declarations.h
	$(CC) $(CFLAGS) createInfra.c
run:
	./server
clean:
	-rm *.o
	-rm server

