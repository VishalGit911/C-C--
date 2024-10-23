#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter a number :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a < b && c < b && d < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a < d && b < d && c < d)
    {
        printf("%d is bigger number", d);
    }
    else
    {
        printf("%d is bigger number", a);
    }
}