// 25. Write a program in C to find sum of rows an columns of a Matrix.
#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter your Row : ");
    scanf("%d", &r);
    printf("Enter your column : ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter your matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of element is : %d", sum);
    return 0;
}