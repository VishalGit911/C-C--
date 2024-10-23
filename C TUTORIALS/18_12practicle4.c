#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("enter number :");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (a < b && c < b && d < b && e < b && f < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c && e < c && f < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a < d && b < d && c < d && e < d && f < d)
    {
        printf("%d is bigger number", d);
    }
    else if (a < e && b < e && c < e && d < e && f < e)
    {
        printf("%d is bigger number", e);
    }
    else if (a < f && b < f && c < f && d < f && e < f)
    {
        printf("%d is bigger number", f);
    }
    else
    {
        printf("%d is bigger number",a);
    }
}