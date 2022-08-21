//34 Array and pointer in c
#include <stdio.h>
#include <string.h>
int main()
{
    int arr[5] = {1, 3, 5, 6, 7}, *ptr[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }
    printf("%d\n", *(&ptr[1]));
    printf("%d", &arr[1]);
    return 0;
}