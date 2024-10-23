#include <stdio.h>
int main()
{
    int const year = 365;
    int a;
    printf("enter the value of A :");
    scanf("%d", &a);
    printf("total year %d\n", a / year);
    int b;
    printf("enter the value of b : ");
    scanf("%d", &b);
    printf("total year %f\n", a * year);
}