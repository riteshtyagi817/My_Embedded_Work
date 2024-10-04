#ifndef DECLARATIONS_H
#define DECLARATIONS_H

typedef struct Stack{

		
	int curr_size;
	int capacity;
	int *arr;
	Stack(int c){
		capacity = c;
		curr_size = 0;
		arr = (int *)calloc(capacity,sizeof(int));
		if(!arr){

			perror("Some Issue during allocaton inside the structure\n");
		}
	}

}Stack;

void push(Stack *st,int value);
int pop(Stack *st);
void printStack(Stack *s);
void freeStack(Stack *s);
#endif
