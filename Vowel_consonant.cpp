//This program outputs whether a character is vowel or consonant 
#include<stdio.h>
int main()
{
	printf("Welcome.....\n");
	printf("Enter a alphabet:");
	char c;
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u') printf("The character %c is a vowel.",c);
		else printf("The character %c is a consonant.",c);
		
	}
	else printf("The character %c is not a alphabet",c);
	return 0;
}
