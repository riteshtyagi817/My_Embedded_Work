pqueue: main.o functions.o
	$(CC) -o pqueue main.o functions.o

%.o: %.c
	$(CC) -g -c $< -o $@
	
#main.o: main.c headers.h ds.h functions.h
	
#functions.o: functions.c functions.h headers.h ds.h

clean:
	rm *.o pqueue

