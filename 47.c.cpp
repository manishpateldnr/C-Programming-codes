#include<stdio.h>
int main()
{
	int a[2][2], b[2][2], result[2][2];
	printf("Enter the 1st element of matrix\n");
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<2; ++j)
		{
			printf("a%d%d ",i + 1, j + 1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the element of second element of matrix\n");
	
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<2; ++j)
		{
			printf("b%d%d ",i + 1, j + 1);
			scanf("%f",&b[i][j]);
		}
	
	}
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<2; ++j)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("sum of matrix :- \n");
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<2; ++j)
		{
			printf("%.1f\t",result[i][j]);
			
			if(j == 1)
				printf("\n");
		}
	
	}
	return 0;
}