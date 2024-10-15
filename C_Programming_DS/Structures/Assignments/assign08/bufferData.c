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
	b->data[b->curr_size] = value;
	b->curr_size++;
	if(b->curr_size == b->capacity){
		b->isFull = true;
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
	bool isDup = false;
	int temp[b->capacity];
	if(b->curr_size == 0){

		printf("Sorry we have no data as of now\n");
		return;
	}
	int count_idx = 0;
	temp[count_idx] = b->data[0];
	count_idx++;
	for(int i = 1; i < b->curr_size;++i){
		isDup = false;
		for(int j = i-1; j >=0;j--){

			if(b->data[i] == b->data[j] || b->data[i] == 0){
				isDup = true;
				break;
			}
		}
		if(isDup == false){
			temp[count_idx] = b->data[i];
			count_idx++;
		}


	}
	int *newData = (int *)malloc(count_idx*sizeof(int));
	if(!newData){
		perror("some issue during malloc in compress\n");
		exit(EXIT_FAILURE);
	}
	for(int i = 0; i < count_idx;++i){
		newData[i] = temp[i];

	}
	free(b->data);
	b->data = NULL;
	b->data = newData;
	b->curr_size = count_idx;
	b->capacity = count_idx;
	return;

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
}
void display(Buffer *b){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	for(int i = 0; i < b->curr_size;++i){

		printf("%d ",b->data[i]);
		
	}
	printf("\n");

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif

}
void freeBuff(Buffer *b){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	free(b->data);
	b->curr_size = 0;
	b->capacity = 0;

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
}


