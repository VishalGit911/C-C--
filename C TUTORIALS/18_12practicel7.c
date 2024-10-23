#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i;
    printf("enter number :");
    scanf("%d %d %d %d %d %d %d %d %d ", &a, &b, &c, &d, &e, &f,&g, &h, &i);
    if (a < b && c < b && d < b && e < b && f < b && g < b && h < b && i < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c && e < c && f < c && g < c && h < c && i < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a < d && b < d && c < d && e < d && f < d && g < d && h < d && i < d)
    {
        printf("%d is bigger number", d);
    }
    else if (a < e && b < e && c < e && d < e && f < e && g < e && h < e && i < e)
    {
        printf("%d is bigger number", e);
    }
    else if (a < f && b < f && c < f && d < f && e < f && g < f && h < f && i < f)
    {
        printf("%d is bigger number", f);
    }
    else if (a < g && b < g && c < g && d < g && e < g && f < g && h < g && i < g)
    {
        printf("%d is bigger number", g);
    }
    else if (a < h && b < h && c < h && d < h && e < h && f < h && g < h && i < h)
    {
        printf("%d is bigger number", h);
    }
    else if (a < i && b < i && c < i && d < i && e < i && f < i && g < i && h < i)
    {
        printf("%d is bigger number", i);
    }
    else
    {
        printf("%d is bigger number", a);
    }
}