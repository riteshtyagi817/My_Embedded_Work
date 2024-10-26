#include "headers.h"
#include "declarations.h"
void init(DynamicMatrix *dm,int m, int n){
#ifdef DEBUG
	printf("%s start\n");
#endif

	dm->data = (int **)malloc(m*sizeof(int *));
	if(!dm->data){
		perror("Memory allocation failed in init function\n");
		exit(EXIT_FAILURE);

	}
	for(int i  = 0; i < m;++i){

		dm->data[i] = (int *)malloc(n*sizeof(int));
		if(!dm->data[i]){
			
			perror("Memory allocation failed in init function\n");
			exit(EXIT_FAILURE);

		}
	}

#ifdef DEBUG
	printf("%s end\n");
#endif

}
int getValue(DynamicMatrix *dm,int row, int col){

#ifdef DEBUG
	printf("%s start\n");
#endif
	return dm->data[row][col];

#ifdef DEBUG
	printf("%s end\n");
#endif
}
void setValue(DynamicMatrix *dm, int row, int col, int value){

#ifdef DEBUG
	printf("%s start\n");
#endif
	dm->data[row][col] = value;


#ifdef DEBUG
	printf("%s end\n");
#endif
}
void printMatrix(DynamicMatrix *dm, int m, int n){

#ifdef DEBUG
	printf("%s start\n");
#endif
	printf("printing the matrix:\n");
	for(int i = 0; i < m;++i){
		for(int j = 0; j < n;++j){

			printf("%d ",dm->data[i][j]);
		}
		printf("\n");

	}

#ifdef DEBUG
	printf("%s end\n");
#endif
	return;
}
void transposeMatrix(DynamicMatrix *dm, int m, int n){

#ifdef DEBUG
	printf("%s start\n");
#endif
	int temp  = 0;

	/* First method for transpose using extra space */
#if 0
	int temp[m][n];
	for(int i = 0; i < m;++i){

		for(int j = 0; j < n;++j){
			temp[i][j] = dm->data[i][j];
		}
	}
	for(int i = 0; i < m;++i){

		for(int j  = 0; j < n;j++){

			dm->data[i][j] = temp[j][i];
		}

	}
#endif	
	/* another method for transpose in place */
	
	for(int i = 0; i < m;++i){

		for(int j  = i+1; j < n;j++){

			temp = dm->data[i][j];
			dm->data[i][j] = dm->data[j][i];	
			dm->data[j][i] = temp;
		}

	}
	return;





#ifdef DEBUG
	printf("%s end\n");
#endif

}
void freeMatrix(DynamicMatrix *dm,int rows, int cols){
#ifdef DEBUG
	printf("%s start\n", __func__);
#endif
	for(int i = 0; i < rows;++i){
		
		free(dm->data[i]);
		dm->data[i] = NULL;


	}
	free(dm->data);


#ifdef DEBUG
	printf("%s end\n", __func__);
#endif

}




