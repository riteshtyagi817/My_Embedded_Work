#ifndef DECLARATIONS_H
#define DECLARATIONS_H
typedef struct Buffer{

	int *data;
	bool isFull;
	int capacity;
	int curr_size;


}Buffer;
void initStruct(Buffer *b,int size);
void addData(Buffer *b, int value);
void compressData(Buffer *b);
void display(Buffer *b);
#endif
