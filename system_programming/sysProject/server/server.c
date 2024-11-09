#include "declarations.h"

int main(int agrc, char *argv[]){

#ifdef DEBUG 
	printf("%s %s start %s\n",__FILE__,__LINE__,__func__);
#endif
	Infra infra;
	createInfra(&infra);


#ifdef DEBUG
	printf("%s %s end %s\n",__FILE__,__LINE__,__func__);
#endif


	return 0;

}
