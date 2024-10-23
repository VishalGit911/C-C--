#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("enter number : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < b && c < b && d < b && e < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c && e < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a < d && b < d && c < d && e < d)
    {
        printf("%d is bigger number", d);
    }
    else if (a < e && b < e && c < e && d < e)
    {
        printf("%d is bigger number", e);
    }
    else
    {
        printf("%d is bigger number", a);
    }
}