#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){


	printf("Test Data:\n");
	printf("Input 5 integers:\n");
	int high = INT_MIN;
	int pos = -1;
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	high = (a > high)?a:high;
	high = (b > high)?b:high;
	high = (c > high)?c:high;
	high = (d > high)?d:high;
	high = (e > high)?e:high;
	if(high == a)pos = 1;
	else if(high == b)pos = 2;
	else if(high == c)pos = 3;
	else if(high == d)pos = 4;
	else if(high == e)pos = 5;
	printf("Expected Output:\n");
	printf("Highest value: %d\n",high);
	printf("Position: %d\n",pos);



	return 0;

}
