CC = gcc 
CFLAGS = -g -c
LFLAGS = -o 
DEBUG = 
#DEBUG = -DDEBUG

reader: reader.o queue_methods.o
	$(CC) $(LFLAGS) reader reader.o queue_methods.o
writer: writer.o queue_methods.o
	$(CC) $(LFLAGS) writer writer.o queue_methods.o
reader.o: reader.c headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) reader.c 
writer.o: writer.c headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) writer.c 
queue_methods.o: queue_methods.c headers.h declarations.h
	$(CC) $(CFLAGS) $(DEBUG) queue_methods.c
clean:
	-rm *.o
	-rm reader
	-rm writer

