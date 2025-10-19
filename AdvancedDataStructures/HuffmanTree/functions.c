#include "headers.h"
#include "ds.h"
#include "functions.h"
int createPriorityQueue(mStruct *mArray,PrQueue *pq){

	printf("mArray size in createPriorityQueue %d\n",mArray->size);



	return 0;
}
void build_master(char *input,mStruct **temp){

	
	*temp = calloc(1, sizeof(mStruct));
	mStruct *ms = *temp;
	if(!ms){
		perror("calloc");
		exit(errno);
	}
	ms->size = 0;
	size_t idx = 0;
	bool isFound = false;
	char ch = '\0';
	do{
		ch = input[idx];
		isFound = false;
		if(ch == '\0') break;
		for(size_t i = 0; i < ms->size;i++){
			if((ms->b+i)->ch == ch){
				(ms->b+i)->freq++;
				isFound = true;
			}
		}
		if(!isFound){
			ms->size++;
			//printf("ms->size before %d\n",ms->size);
			ms->b = reallocarray(ms->b,ms->size, sizeof(Bundle));
			if(!ms->b){
				perror("reallocarray");
				exit(errno);

			}
			(ms->b + ms->size-1)->ch = ch;
			(ms->b + ms->size-1)->freq = 1;
		}

		idx++;


	}while(ch != '\0');

	printf("ms->size %d\n",ms->size);
	//*temp = ms;
	return;

}
char *getInput(){

	char *input = NULL;
	size_t idx = 0;
	char c = '\0';
	do{
		input  = reallocarray(input, idx+1,sizeof(char));
		if(!input){
			perror("reallocarray");
			exit(errno);
		}
		scanf("%c",&c);
		if(c == '\n') break;
		*(input + idx) = c;
		idx++;
		
	}while(c != '\n');
	idx++;
	*(input + idx) = '\0';
	int len = strlen(input);
	printf("The len of input string is %d\n",len);
	return input;

}
