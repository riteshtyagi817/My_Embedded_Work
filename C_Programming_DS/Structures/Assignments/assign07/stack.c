#include "headers.h"
#include "declarations.h"



void init(Stack *st,int c){
	st->capacity = c;
	st->curr_size = 0;
	st->arr = (int *)calloc(st->capacity,sizeof(int));
	if(!st->arr){

		perror("Some Issue during allocaton inside the structure\n");
	}



}
void push(Stack *st, int value){

#ifdef DEBUG
	printf("%s start \n", __func__);
#endif
	if(st->curr_size == st->capacity){

			printf("doubling the capacity\n");		
			int newC = st->capacity*2;
			int *newArr = (int *)calloc(newC,sizeof(int));
			if(!newArr){
				perror("some issue with allocation in push function\n");

			}
			for(int i = 0; i < st->curr_size;++i){

				newArr[i] = st->arr[i];
			}
			st->capacity = newC;
			free(st->arr);
			st->arr = newArr;

	}
	st->arr[st->curr_size] = value;
	st->curr_size++;
	
#ifdef DEBUG
	printf("%s end \n", __func__);
#endif
	return;

}
int pop(Stack *st){
	
#ifdef DEBUG
	printf("%s start \n", __func__);
#endif
	if(st->curr_size == 0){
		printf("Array is empty\n");
		return -1;
	}
 	int value = st->arr[st->curr_size-1];
	st->curr_size--;
	return value;
#ifdef DEBUG
	printf("%s end \n", __func__);
#endif
}
void printStack(Stack *st){

#ifdef DEBUG
	printf("%s start \n", __func__);
#endif

	printf("Printing the stack\n");
	for(int i = 0; i < st->curr_size;++i){

		printf("%d ",st->arr[i]);

	}
	printf("\n");
#ifdef DEBUG
	printf("%s end \n", __func__);
#endif
}
void freeStack(Stack *s){

#ifdef DEBUG
	printf("%s start \n", __func__);
#endif
	free(s->arr);
	//free(s);
	//s = NULL;
	s->arr = NULL;

#ifdef DEBUG
	printf("%s end \n", __func__);
#endif

}




