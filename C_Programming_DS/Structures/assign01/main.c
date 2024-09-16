#include "headers.h"
#include "declarations.h"
int main()
{
#ifdef DEBUG
	printf("%s Begin\n",__func__);
#endif
	Distance *da, *db;
	Distance *res = NULL;

	da = getDistance();
	db = getDistance();
	
	printf("The result of summing both the structures is: ");

	res = getSum(da,db);
	display(res);

#ifdef DEBUG
	printf("%s End\n",__func__);
#endif
	return 0;



}
