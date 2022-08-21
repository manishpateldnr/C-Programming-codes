//35 shorting the array
#include <stdio.h>
#include <string.h>
int main()
{
    int num, i, j, sum;
    printf("Enter your size of array : ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                sum = arr[i];
                arr[i] = arr[j];
                arr[j] = sum;
            }
        }
    }
    for (i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}