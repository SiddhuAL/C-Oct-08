//This program outputs whether the character is a alphabet or digit or consonant
#include<stdio.h>
int main()
{
	int i = 1;
	printf("Welcome........");
	while(i==1)
	{
		printf("\nEnter any character:");
		char d;
		scanf(" %c",&d);
		if((d>='a'&&d<='z')||(d>='A'&&d<='Z')) printf("The character you entered is a alphabet\n");
		else if(d>='0'&&d<='9') printf("The characrer you entered is a digit\n");
		else printf("The character you entered is a special character\n");
		printf("Do you still wanna continue(y/n):");
		char ans;
		scanf(" %c",&ans);
		if(ans=='Y'||ans=='y') printf("Sure\n");
		else i++;
		
	}
	return 0;
}
