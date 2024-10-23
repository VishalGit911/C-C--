#include <stdio.h>
int main()
{
    // Simple
    int x;
    x = 10;

    // single of p pointer
    int *p;
    p = &x;

    // double pointer
    int **q;
    q = &p;

    printf("%d\n", x);
    printf("%d\n", &x);

    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", *p);

    printf("%d\n", q);
    printf("%d\n", &q);
    printf("%d\n", *q);
    printf("%d\n", **q);
}