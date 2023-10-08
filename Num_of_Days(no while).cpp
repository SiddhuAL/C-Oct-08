//This program outputs the number of days present in the given month of specified year
#include<stdio.h>
int main()
{
	int y,m;
	printf("Welcome....");
	printf("\nEnter the month:");
	scanf("%d",&m);
	printf("Enter the year:");
	scanf("%d",&y);
	int y_ = y%4;
	if(y_==0)
	{
		if(m==2) printf("There are 29 days in %d month of %d",m,y);
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) printf("There are 31 days in %d month of %d",m,y);
		else printf("There are 30 days in %d month of %d",m,y);
	}
	else 
	{
		if(m==2) printf("There are 28 days in %d month of %d",m,y);
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) printf("There are 31 days in %d month of %d",m,y);
		else printf("There are 30 days in %d month of %d",m,y);
	}
	return 0;
}
