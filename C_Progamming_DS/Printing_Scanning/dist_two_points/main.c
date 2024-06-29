#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	int x1,y1;
	int x2,y2;
	printf("Enter x and y cordinates for first point: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter x and y cordinates for second point: ");
	scanf("%d%d",&x2,&y2);

	double distance =  sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("The distance between the points are %.2lf\n",distance);

	return 0;
}
