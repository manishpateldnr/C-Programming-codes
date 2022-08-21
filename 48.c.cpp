#include<stdio.h>
int main()
{
	int mat[2][3][3];
	printf("enter 12 element\n");
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			for(int k=0; k<2; ++k)
			{
				scanf("%d\n",&mat[2][3][2]);
			}
		}
	}
	printf("displaying matrix \n");
	for(int i=0; i<2; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			for(int k=0; k<2; ++k)
			{
				printf("mark[%d][%d][%d] = %d\n", i, j, k, mat[i][j][k]);
			}
		}
	}
	return 0;
}