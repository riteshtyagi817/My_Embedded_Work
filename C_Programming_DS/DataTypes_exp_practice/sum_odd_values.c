#include<stdio.h>
int main(){
	int a, b,c,d,e;
	printf("Enter the five numbers: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int sum = 0;
	if(a % 2 != 0) sum += a;
	if(b % 2 != 0) sum += b;
	if(c % 2 != 0) sum += c;
	if(d % 2 != 0) sum += d;
	if(e % 2 != 0) sum += e;
	printf("The sum of odd values among these numbers is %d.\n",sum);
	

	return 0;
}
