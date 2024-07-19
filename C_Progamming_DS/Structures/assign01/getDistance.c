#include "headers.h"
#include "declarations.h"
Distance * getDistance()
{

#ifdef DEBUG
	printf("%s Begin\n", __func__);
#endif
	Distance *d = NULL;
	d = (Distance*)malloc(sizeof(Distance));
	if(!d)
	{
		perror("Malloc failed\n");
		exit(EXIT_FAILURE);

	}
	printf("Enter the distance in feet and inches\n");
	scanf("%d%f", &d->feet, &d->inches);

#ifdef DEBUG
	printf("%s End\n", __func__);
#endif
	return d;


}
