// 31 Aramstrong number
#include <stdio.h>
#include <string.h>
int main()
{
    int num, k = 0, r, i, sum = 1, m = 0, temp;
    printf("Enter your number : ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        num = num / 10;
        k++;
    }
    num = temp;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        for (i = 1; i <= k; i++)
        {
            sum = sum * r;
        }
        m = m + sum;
        sum = 1;
    }
    if (temp == m)
    {
        printf("This is armstrong number");
    }
    else
    {
        printf("no");
    }
    return 0;
}
