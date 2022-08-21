#include<stdio.h>
int sum()
{
	int a,b,sum=0;
	printf(" Enter a and b : ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("the sum is : %d ",sum);
}
int main()
{
	sum();
	sum();
}