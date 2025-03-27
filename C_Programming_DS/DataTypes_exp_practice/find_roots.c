#include<stdio.h>
#include<math.h>
int main(){

	int a,b,c;
	double first_root = 0;
	double second_root = 0;
	printf("Enter the value of a, b and c\n");
	scanf("%d%d%d",&a,&b,&c);

	double D = sqrt(pow(b,2) + 4*a*c);

	first_root  =  (-b + D)/(2*a);
	second_root =  (-b - D)/(2*a);

	printf("The first root is %.2f\n",first_root);
	printf("The second root is %.2f\n",second_root);

	return 0;



}
