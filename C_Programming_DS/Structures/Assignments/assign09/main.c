#include "headers.h"
#include "declarations.h"
int main(){
#ifdef DEBUG 
	printf("%s start\n",__func__);
#endif
	int rows = 0;
	int cols = 0;
	printf("Enter the rows for matrix: \n");
	scanf("%d",&rows);
	printf("Enter the cols for matrix: \n");
	scanf("%d",&cols);
	DynamicMatrix dm;
	init(&dm, rows,cols);

	printf("Now enter %d values one by one for 2d matrix\n",(rows*cols));

	int value = 0;
	for(int i = 0; i < rows;++i){
		for(int j = 0; j < cols;++j){
			
			scanf("%d",&value);
			setValue(&dm,i,j,value);

			
		}

	}



#ifdef DEBUG 
	printf("%s end\n",__func__);
#endif
	return 0;

}
