#include "headers.h"
#include "functions.h"
#include "ds.h"

int main(int argc, char *argv[]){

	PrQueue pq;
	char *input = NULL;
	int ret = 0;
	printf("Enter the input string: ");
	input = getInput();
	printf("The input string we recieved as: %s\n",input);
	mStruct *mArray = NULL;
	build_master(input,&mArray);
	if(!mArray){
		perror("build_master");
		exit(errno);
	}
	printf("mArray->size %d\n",mArray->size);
	for(size_t i = 0;  i < mArray->size;i++){
		printf("%c %d\n",(mArray->b+i)->ch, (mArray->b + i)->freq);

	}
	pq.noi = mArray->size;
	pq.ppq = calloc(pq.noi,sizeof(*(pq.ppq)));
	if(!pq.ppq){
		perror("calloc");
		exit(errno);

	}
	ret = createPriorityQueue(mArray,&pq);
	if(ret != 0) {
		perror("createPriority");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);

}
