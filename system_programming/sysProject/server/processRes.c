#include "../common/dataStructures.h"
#include "declarations.h"
void * processResult(void *arg){

#ifdef DEBUG
	printf("%s function start\n",__func__);
#endif

	Infra *infra = (Infra *)arg;
	// attach the shared memory
	sem_t *st = (sem_t *)shmat(infra->shmResultId,(void *)NULL,0);

	sem_init(st,1,0);
	while(1){

		sem_wait(st);




		
	}


#ifdef DEBUG
	printf("%s function end\n",__func__);
#endif

}


