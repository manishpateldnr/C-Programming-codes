#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter angle a : ");
	scanf("%d",&a);
	printf("Enter angle b : ");
	scanf("%d",&b);
	printf("Enter angle c : ");
	scanf("%d",&c);
	if(a + b + c ==180)
		printf("The triangle is valid");
	else
		printf("The triangle is not valid");
	return 0;
}