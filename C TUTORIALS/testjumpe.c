#include <stdio.h>
int main()
{
    int sum = 0;
    int num, min = 0, max = 0;
    float avg;
    float count = 0;
input:
    printf("enter the number : ");
    scanf("%d", &num);
    if (num != 0)
    {
        sum = sum + num;

        if (num > max)
        {
            max = num;
        }
        if (count == 0 || num <min)
        {
            min = num;
        }
        count++;
        goto input;
    }
    if (count > 0)
    {
        avg = sum / count;
        printf("%d is total sum\n", sum);
        printf("%d is minimum number\n", min);
        printf("%d is maximum number\n", max);
        printf("%.2f is average number\n", avg);
    }
}
