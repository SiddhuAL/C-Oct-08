//This program outputs weekday with input of number
#include<stdio.h>
#include<strings.h>
int main()
{
	int s;
	printf("Welcome....\n");
	int d = 1;
	while(d==1)
	{
		printf("Enter the day number:");
		scanf("%d",&s);
		if(s==1) printf("It represents Monday");
		else if(s==2) printf("It represents Tuesday");
		else if(s==3) printf("It represents Wednesday");
		else if(s==4) printf("It represents Thursday");
		else if(s==5) printf("It represents Friday");
		else if(s==6) printf("It represents Saturday");
		else if(s==7) printf("It represents Sunday");
		else printf("Invalid INPUT");
		printf("\nDo you still want to continue(y/n):");
		char s[1];
		char str1[] = "Y";
		char str2[] = "y";
		scanf("%s",s);
		if(strcmp(s,str1)==0||strcmp(s,str2)==0) printf("Sure\n");
		else d++;
		
		
	}
	printf("\nThank you");
	return 0;
	
}
