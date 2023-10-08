//This program is used to calculate the percentage and grade of a particular student
#include<stdio.h>
int main()
{
	float p,ch,m,b,c;
	printf("Welcome...........\nStart entering your marks in respective subjects mentioned:\n");
	printf("Physics:");
	scanf("%f",&p);
	printf("Chemistry:");
	scanf("%f",&ch);
	printf("Mathematics:");
	scanf("%f",&m);
	printf("Biology:");
	scanf("%f",&b);
	printf("Computer:");
	scanf("%f",&c);
	float pc = (p+ch+m+b+c)/5.0;
	printf("---------------------------------------\n");
	printf("PERCENTAGE: %.2f%% \n",pc);
	if(pc>=90) printf("GRADE : A");	
	else if(pc>=80&&pc<90) printf("GRADE : B");
	else if(pc>=70&&pc<80) printf("GRADE : C");
	else if(pc>=60&&pc<70) printf("GRADE : D");
	else if(pc>=40&&pc<60) printf("GRADE : E");
	else printf("GRADE : F");
	printf("\n---------------------------------------");
	return 0;
}
