#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a :");
    scanf("%d", &a);
    a += 10;
    printf("add(10) a = %d\n", a);
    a -= 10;
    printf("sub(10)a = %d\n", a);
    a *= 5;
    printf("multi*(10)a = %d\n", a);
    a /= 2;
    printf("div(10)a = %d\n", a);
    a %= 2;
    printf("div(10)a = %d\n", a);
}
