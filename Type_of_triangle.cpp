#include<stdio.h>
int main()
{
	printf("Welcome....");
	printf("\nEnter the three sides of the traingle(in cm):");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a==b&&b==c&&c==a) printf("The three mentioned sides are %.1f %.1f %.1f.\nThe traingle is a equitorial triangle",a,b,c);
	else if(a==b&&b!=c) printf("The three mentioned sides are %.1f %.1f %.1f.\nThe traingle is a isoceless triangle",a,b,c);
	else if(c==b&&a!=c) printf("The three mentioned sides are %.1f %.1f %.1f.\nThe traingle is a isoceless triangle",a,b,c);
	else if(a==c&&b!=c) printf("The three mentioned sides are %.1f %.1f %.1f.\nThe traingle is a isoceless triangle",a,b,c);
	else printf("The three mentioned sides are %f %f %f.\nThe traingle is a scalene triangle",a,b,c);
	return 0;
}
