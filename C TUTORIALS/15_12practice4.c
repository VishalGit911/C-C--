#include <stdio.h>
int main()
{
    int d;
    printf("enter the values of d :");
    scanf("%d",&d);

    d += 10;
    printf("add(10) d = %d\n", d);
    d -= 80;
    printf("sub(10)d = %d\n", d);
    d *= 4;
    printf("multi*(10)d = %d\n", d);
    d /= 20;
    printf("div(10)d = %d\n", d);
    d %= 50;
    printf("module(10)d = %d\n", d);
}