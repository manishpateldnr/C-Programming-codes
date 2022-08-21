#include<stdio.h>
int calsum(int x, int y, int z);
int main()
{
	int a,b,c,sum;
	printf("Enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("sum=%d\n",sum);
	return 0;
	
}
int calsum(int x, int y, int z)
{
	int d;
	d=x+y+z;
	return(d);
}
int fun()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	if(n>=10 && n<=90)
	return(n);
	else
	return(n+32);
}