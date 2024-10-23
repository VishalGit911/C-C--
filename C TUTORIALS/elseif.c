#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter  number a b c  :");
    scanf("%d %d %d", &a, &b, &c);
    printf("a =%d b=%d c=%d", a, b, c);

    if (a < b && c < b)
    {
        printf(" b is max");
    }
    else if (b < c && a < c)
    {
        printf(" c is max");
    }
    else
    {
        printf(" a is max");
    }
}