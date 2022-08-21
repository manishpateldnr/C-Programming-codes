//36 write a c program in two element in array which sum is close the 0
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter your size of array : ");
    scanf("%d", &num);
    int arr[num];
    printf("The Array is down : ");
    for (i = 0; i < num; i++)
    {
        // printf("Element %d : ", i);
        scanf("%d", &arr[i]);
    }
    int m = arr[0], m1 = arr[1];
    for (i = 0; i < num; i++)
    {
        if (arr[i] < m)
        {
            m = arr[i];
        }
        else if (arr[i] > m && arr[i] < m1)
        {
            m1 = arr[i];
        }
    }
    printf("The sum of two element which is near to zero is %d %d and sum = %d", m, m1, m + m1);
    return 0;
}