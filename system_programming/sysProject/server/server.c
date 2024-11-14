#include "declarations.h"
#include "../common/dataStructures.h"

int main(int agrc, char *argv[]){

#ifdef DEBUG 
	printf("%s %d start %s\n",__FILE__,__LINE__,__func__);
#endif
	init();
	Infra *infra = NULL;
	infra = (Infra *)(*fptrArr[1])(NULL);
	if(!infra){
		perror("Some issue during createInfra\n");
		(*fptrArr[0])("FAILURE");	

	}


	/*
	fd = open(MYFIFO,O_RDWR);
        if(fd < 0){

                perror("could not open the fifo\n");
                exit(EXIT_FAILURE);
        }
        infra->fifoDsc = fd;
	*/

#ifdef DEBUG
	printf("%s %d end %s\n",__FILE__,__LINE__,__func__);
#endif


	return 0;

}
