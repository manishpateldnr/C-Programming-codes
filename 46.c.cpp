#include<stdio.h>
const int CITY= 2;
const int WEEK= 7;
int main()
{
	int temprature[CITY][WEEK];
	
	printf("write a matrix\n");
	
	for(int i=0; i<CITY; ++i)
	{
		for(int j=0; j<WEEK; ++j)
		{
			printf("City %d, Day %d ",i+1, j+1);
			scanf("%d",&temprature[i][j]);
		}
	}
	printf("\n Displaying matrix \n\n");
	
	for(int i=0; i<CITY; ++i)
	{
		for(int j=0; j<WEEK; ++j)
		{
			printf("city %d, day %d = %d \n ",i+1, j+1,temprature[i][j]);
		}
	}
	return 0;
}
	