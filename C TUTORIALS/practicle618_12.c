#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h;
    printf("enter number :");
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g,&h);
    if (a < b && c < b && d < b && e < b && f < b && g < b && h < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c && e < c && f < c && g < c && h < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a < d && b < d && c < d && e < d && f < d && g < d && h < d)
    {
        printf("%d is bigger number", d);
    }
    else if (a < e && b < e && c < e && d < e && f < e && g < e && h < e)
    {
        printf("%d id bigger number", e);
    }
    else if (a < f && b < f && c < f && d < f && e < f && g < f && h < f)
    {
        printf("%d id bigger number", f);
    }
    else if (a < g && b < g && c < g && d < g && e < g&& f < g && h<g )
    {
        printf("%d id bigger number", g);
    }
    else if (a < h && b < h && c < h && d < h && e < h && f < h && g < h)
    {
        printf("%d is bigger number", h);
    }
    else
    {
        printf("%d is bigger number", a);
    }
}