#include <stdio.h>
 int main()
 {
     int num, i, j, sum = 0;
     printf("Enter your size of matrix : ");
     scanf("%d", &num);
     int arr[num][num];
     printf("Enter  your matrix\n");
     for (i = 0; i < num; i++)
     {
         for (j = 0; j < num; j++)
         {
             scanf("%d", &arr[i][j]);
         }
     }
     printf("\n");
     for (i = 0; i < num; i++)
     {
         for (j = 0; j < num; j++)
         {
             if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
             {
                 printf("%d ", arr[i][j]);
                 sum += arr[i][j];
             }
         }
     }
     printf("\n%d", sum);
     return 0;
 }