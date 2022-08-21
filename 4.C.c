// 37. Write a program in C to find the majority element of an array.
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter your number : ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i < num; i++)
    {
        printf("Element %d : - ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int n = 0;
    for (i = 0; i < num; i++)
    {
        if (arr[i] == max)
        {
            n++;
        }
    }
    int majority = (max / n) + 1;
    int k = 0;
    for (i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] = arr[j])
            {
                k++;
            }
        }
    }
    if (majority < k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}