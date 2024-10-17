#ifndef DECLARATIONS_H
#define DECLARATIONS_H
typedef struct DynamicMatrix{

	int **data;

}DynamicMatrix;

void init(DynamicMatrix *dm,int m, int n);
int getValue(DynamicMatrix *dm,int row, int col);
void setValue(DynamicMatrix *dm, int row, int col, int value);
void transposeMatrix(DynamicMatrix *dm, int m, int n);
void printMatrix(DynamicMatrix *dm, int m, int n);

#endif
