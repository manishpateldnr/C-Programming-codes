#include<stdio.h>
int main()
{
	int mark[10];
	int i, n, sum=0, avg;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("enter the num %d ",i+1);
		scanf("%d",&mark[i]);
	
		sum= sum + mark[i];
	}
	avg=sum/n;
	printf("average :%d\n",avg);
	printf("%d",mark[8]);
	
}