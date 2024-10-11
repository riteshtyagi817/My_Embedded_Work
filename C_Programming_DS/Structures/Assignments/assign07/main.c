#include "headers.h"
#include "declarations.h"

int main(){

#ifdef DEBUG
        printf("%s start \n", __func__);
#endif
	int capacity = 0;
	printf("Enter the initial capacity of the stack: ");
	scanf("%d",&capacity);

	Stack st;
	init(&st,capacity);
	push(&st,13);
	printStack(&st);
	push(&st,14);
	printStack(&st);
	push(&st,15);
	printStack(&st);
	push(&st,16);
	printStack(&st);
	push(&st,17);
	printStack(&st);

	printf("Popping the value: %d\n",pop(&st));
	printf("Popping the value: %d\n",pop(&st));
	printf("Popping the value: %d\n",pop(&st));

	printStack(&st);


	freeStack(&st);


#ifdef DEBUG
        printf("%s end \n", __func__);
#endif
	return 0;
}