#include "headers.h"
#include "declarations.h"
void initStruct(Buffer *b,int size){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	b->data = (int *) calloc(size,sizeof(int));
	if(!b->data){
		perror("Some Issue during memory alloc in initStruct function\n");
		exit(EXIT_FAILURE);
	}
	printf("Memory allocated for %d int elements\n",size);
	b->isFull = false;
	b->capacity = size;
	b->curr_size = 0;

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
	return;
}
void addData(Buffer *b, int value){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	if(b->isFull){
		printf("Sorry buffer is full, resetting the buffer\n");
		for(int i = 0; i < b->capacity;++i){
			b->data[i] = 0;
		}
	}
	b->data[curr_size] = value;
	curr_size++;
	if(curr_size == capacity){
		b->ifFull = true;
	}	
	

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
	return;
}
void compressData(Buffer *b){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	


#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
}
