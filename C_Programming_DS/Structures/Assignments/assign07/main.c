#include "headers.h"
#include "declarations.h"

int main(){

#ifdef DEBUG
        printf("%s start \n", __func__);
#endif
	int capacity = 0;
	printf("Enter the initial capacity of the stack: ");
	scanf("&d",&capacity);

	Stack st(capacity);

	st.push(&st,13);

	
		


#ifdef DEBUG
        printf("%s end \n", __func__);
#endif
	return 0;
}
