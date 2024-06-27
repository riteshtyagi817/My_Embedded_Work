#include<stdio.h>
#define PI 3.14
int main()
{
	int radius = 0;
	printf("Enter the radius of the circle\n");
	scanf("%d",&radius);
	printf("You entered the radius: %d\n", radius);
	printf("The perimeter of the circle is %.2f\n", 2*PI*radius);
	printf("The area of the circle is %.2f\n",PI*radius*radius);


	return 0;
}
