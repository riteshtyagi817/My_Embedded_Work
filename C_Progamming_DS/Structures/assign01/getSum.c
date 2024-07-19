#include "headers.h"
#include "declarations.h"

Distance *getSum(Distance *da, Distance *db)
{
#ifdef DEBUG
	printf("%s Begin\n",__func__);
#endif

	Distance *result = (Distance *)malloc(sizeof(Distance));
	if(!result)
	{
		perror("Malloc failed\n");
		exit(EXIT_FAILURE);

	}
	result->feet = da->feet + db->feet;
	result->inches = da->inches + db->inches;

	while(result->inches >= 12)
	{
		result->inches -= 12;
		result->feet++;

	}

	
#ifdef DEBUG
	printf("%s End \n",__func__);
#endif

	return result;
}

