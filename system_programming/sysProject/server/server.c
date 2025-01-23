#include "declarations.h"
#include "../common/dataStructures.h"
int main(int agrc, char *argv[]){

#ifdef DEBUG 
	printf("%s %d start %s\n",__FILE__,__LINE__,__func__);
#endif
	init();
	pid_t pid;
	Infra *infra = NULL;
	int bytes_read = 0;
	//Infra *infra = NULL;
	int bytes_write = 0;
	int ret = 0;
	pthread_t tid;
	pthread_t threadResult;
	infra = (Infra *)(*fptrArr[1])(NULL);
	if(!infra){
		perror("Some issue during createInfra\n");
		(*fptrArr[0])("FAILURE");	

	}
	int count = 0;
	// creating separate thread to read from shared memory
	
	ret = pthread_create(&threadResult,NULL,(*fptrArr[3]),(void *)infra);
	if(ret != 0){
		perror("Some issue with pthread creation in server\n");
		(*fptrArr[0])("FAILURE");
	}
	while(1){

		if(sem_wait(&infra->pthsem) == -1){

			perror("Some issue with sem_wait in server program\n");
			(*fptrArr[0])("FAILURE");
		}
		ret = pthread_create(&tid, NULL, (*fptrArr[2]), (void *)infra);
		if(ret != 0){
			perror("Some issue with pthread creation in server\n");
			(*fptrArr[0])("FAILURE");
		}
		count++;
		printf("thread count is %d\n",count);

	}

#ifdef DEBUG
	printf("%s %d end %s\n",__FILE__,__LINE__,__func__);
#endif


	return 0;

}
