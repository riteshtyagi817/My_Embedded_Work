CC = gcc
CLFAGS = -g -c
LFLAGS = -o 
#DEBUG =
DEBUG = -DDEBUG

server: server.o createInfra.o init.o processReq.o processRes.o
	$(CC) $(LFLAGS) server server.o createInfra.o init.o processReq.o processRes.o
processRes.o: processRes.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) processRes.c
processReq.o: processReq.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) processReq.c
server.o: server.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) server.c
createInfra.o: createInfra.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) createInfra.c
init.o: init.c declarations.h
	$(CC) $(CLFAGS) $(DEBUG) init.c
run:
	./server
clean:
	-rm *.o
	-rm server
