#include<stdio.h>
#define PI 3.14159
int main(){

	double radius;
	printf("Enter the radius of the sphere: ");
	scanf("%lf",&radius);
	printf("The volume of the sphere is: %.2lf\n",(4/3)*PI*(radius*radius*radius));

	return 0;

}
