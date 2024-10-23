#include <stdio.h>
int main()
{
    // a,b,c,d,e
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("Enter the value for a:");
    scanf("%d", &a);
    printf("Enter the value for b:");
    scanf("%d", &b);
    printf("Enter the value for c:");
    scanf("%d", &c);
    printf("Enter the value for d:");
    scanf("%d", &d);
    printf("Enter the value for e:");
    scanf("%d", &e);

    if ((a > b) && (a > c) && (a > d) && (a > e))
    {
        printf("a is graterthan all");
    }
    else if ((b > a) && (b > c) && (b > d) && (b > e))
    {
        printf("b is graterthan all");
    }
    else if ((c > a) && (c > b) && (c > d) && (c > e))
    {
        printf("c is graterthan all");
    }
    else if ((d > a) && (d > b) && (d > c) && (d > e))
    {
        printf("d is graterthan all");
    }
    else if ((e > a) && (e > b) && (e > c) && (e > d))
    {
        printf("e is graterthan all");
    }
    else
        printf("nothing..");
}