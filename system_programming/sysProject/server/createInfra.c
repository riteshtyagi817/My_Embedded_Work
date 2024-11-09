#include "declarations.h"


void createInfra(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif

	memset(infra,'\0',sizeof(Infra));
	createPipe(infra);
	createFifo(infra);

#ifdef DEBUG
	printf("%s end \n",__func__);
#endif

}
void createPipe(Infra *infra){


#ifdef DEBUG
	printf("%s start \n",__func__);
#endif
	int ret = pipe(infra->pipeFd);
	if(ret < 0){
		perror("some Issue with Pipe Creation\n");
		exit(EXIT_FAILURE);
	}
	printf("pipe created successfully\n");
#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
	return;
}
void createFifo(Infra *infra){

#ifdef DEBUG
	printf("%s start \n",__func__);
#endif

	

#ifdef DEBUG
	printf("%s end \n",__func__);
#endif
}


