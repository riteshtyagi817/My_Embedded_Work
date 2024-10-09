#ifndef DECLARATIONS_H
#define DECLARATIONS_H

typedef struct Stack{

		
	int curr_size;
	int capacity;
	int *arr;
}Stack;

void init(Stack *st,int c);
void push(Stack *st,int value);
int pop(Stack *st);
void printStack(Stack *s);
void freeStack(Stack *s);
#endif
