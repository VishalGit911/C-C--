#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter number :");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && c < b)
    {
        printf("%d is bigger number",b);
    }
    else if (a < c && b < c)
    {
        printf("%d is bigger number",c);
    }
    else
    {
        printf("%d is bigger number",a);
    }
}