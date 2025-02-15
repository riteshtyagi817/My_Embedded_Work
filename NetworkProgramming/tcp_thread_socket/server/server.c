#include "../common/headers.h"
#include "./declarations.h"
sem_t psem;
int main(){

	int ret = 0;
	int skFd = 0;
	pthread_t pthid;
	sem_init(&psem,0,1);
	skFd = createInfra();
	while(1){

		sem_wait(&psem);
		printf("after sem_wait\n");
		ret = pthread_create(&pthid, NULL,threadClientWork,(void *)&skFd);
		if(ret < 0){
			perror("pthread create failed\n");
			exit(EXIT_FAILURE);
		}


	}



	return 0;
}
