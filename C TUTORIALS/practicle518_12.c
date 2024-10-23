#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("enter number :");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    if (a < b && c < b && d < b && e < b && f < b && g < b)
    {
        printf("%d is bigger number", b);
    }
    else if (a < c && b < c && d < c && e < c && f < c && g < c)
    {
        printf("%d is bigger number", c);
    }
    else if (a<d && b<d && c<d && e<d && f<d && g<d)
    {
        printf("%d is bigger number",d);
    }
    else if (a<e && b<e && c<e && d<e && f<e && g<e)
    {
        printf("%d id bigger number",e);
    }
        else if (a<f && b<f && c<f && d<f && e<f && g<f)
    {
        printf("%d id bigger number",f);
    }
        else if (a<g && b<g && c<g && d<g && f<g && e<g)
    {
        printf("%d id bigger number",g);
    }
    else{
        printf("%d is bigger number",a);
    }
    
 
}