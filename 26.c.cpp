#include<stdio.h>
int main()
{
	int num,d1,d2,d3,d4,d5;
	printf("Enter the five digit number : ");
	scanf("%d",&num);
	d1=num%10;
	d2=(num/10)%10;
	d3=(num/100)%10;
	d4=(num/1000)%10;
	d5=(num/10000)%10;
	printf("The revese of five digit is : %d%d%d%d%d\n",d1,d2,d3,d4,d5);
	if(d3==d3)
		printf("%d is equql\n",d3);
	else
		{
			if(d3!=d3)
		printf("%d is not equql\n",d3);
		}
		
	return 0;
}