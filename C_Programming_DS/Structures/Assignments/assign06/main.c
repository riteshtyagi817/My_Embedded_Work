#include "headers.h"
#include "declarations.h"

int main(){
#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	//printf(" size of int: %ld\n",sizeof(int));
	printf(" size of A: %ld \n",sizeof(A));
	A *pA = (A *)malloc(1*sizeof(A));
	if(!pA){
		perror("Some issue with allocation of pA\n");

	}

	printf(" size of B: %ld \n",sizeof(B));
	B *pB = (B *)malloc(1*sizeof(B));
	if(!pB){
		perror("Some issue with allocation of pA\n");
	}

	pA->bPtr = pB;
	pA->value = 12;
	pB->aPtr = pA;
	pB->value = 13;



	free(pA);
	free(pB);


#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
	return 0;
}
