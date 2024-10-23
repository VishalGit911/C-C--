#include <stdio.h>
int main()
{
    int num, sum = 0;
    while (num != 0)
    {
        printf("enter a number : ");
        scanf("%d", &num);
        sum = sum + num;
        goto sum1;
    }
sum1:0000000000
    printf("%d is total number", sum);
}