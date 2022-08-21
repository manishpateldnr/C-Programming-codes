//32 reverse array in
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i;
    printf("Enter your size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}