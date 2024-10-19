SOURCES = testMake.c main.c
OBJS = $(SOURCES:.c=.o)
TARGET = main
CC = gcc
CFLAGS = -c -g -Wall
LFLAGS = -o 
DEBUG = 
#DEBUG = -DDEBUG

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(TARGET) $(OBJS) 
%.o: %.c
	$(CC) $(OPTS) $(CFLAGS) $< -o $@ 
#below line will also work
#	$(CC) $(OPTS) $(CFLAGS) $< 

clean:
	rm -f $(OBJS) $(TARGET)
run:	
	./main
