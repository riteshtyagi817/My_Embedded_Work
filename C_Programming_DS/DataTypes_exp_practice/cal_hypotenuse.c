#include<stdio.h>
#include<math.h>
int main(){

	int len = 0, brd  = 0;
	double hyp = 0;
	printf("Enter the length and breadth of the right triangle\n");
	scanf("%d%d",&len,&brd);
	hyp = sqrt(pow(len,2) + pow(brd,2));
	printf("Hypotenuse of the right triangle is %.2f\n",hyp);	
	return 0;

}
