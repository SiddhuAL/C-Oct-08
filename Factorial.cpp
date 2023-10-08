//This program is used to find the factorial of a number
#include<stdio.h>
int main()
{
	printf("Welcome.........");
	printf("\nEnter the number:");
	int d;
	scanf("%d",&d);
	int f=1;
	while(d>0)
	{
		f = f*d;
		d--;
				
	}
	printf("The factorial of given number is %d.",f);
	return 0;
}
