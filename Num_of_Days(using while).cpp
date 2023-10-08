//This program outputs the number of days present in the given month of specified year
#include<stdio.h>
#include<strings.h>
int main()
{
	int y,m;
	printf("Welcome....\n");
	int d = 1;
	while(d==1)
	{
		printf("Enter the month:");
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
		char str1[] = "Y";
		char str2[] = "y";
		char s[3];
		printf("\nDo you still want to continue (y/n):");
		scanf("%s",&s);
		if(strcmp(s,str1)==0||strcmp(s,str2)==0) printf("Sure\n");
		else d++;
	}
	printf("\nTHANK YOU....Visit again");
	return 0;
}
