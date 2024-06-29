#include<stdio.h>
#define PI 3.14
int main()
{
	int distance = 0;
	float fuel = 0.0;
	printf("Enter the total distance travelled\n");
	scanf("%d", &distance);

	printf("Enter the fuel(in litres) spent\n");
	scanf("%f",&fuel);

	printf("The distance entered is %d\n",distance);
	printf("Fuel upto 2 decimal places %.2f\n", fuel);
	printf("Bike's average consumption %f\n",distance/fuel);

	return 0;
}
