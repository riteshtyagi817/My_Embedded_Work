#include<stdio.h>
int main(){


	int a,b,c,largest;
	printf("Enter the three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	largest = (a > b)?((a > c)?a:c):((b > c)?b:c);
	printf("Largest among %d , %d , %d is %d\n",a,b,c,largest);

	return 0;
}
