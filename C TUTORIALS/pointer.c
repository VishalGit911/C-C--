#include <stdio.h>
int main()
{

    // what is pointer --> pointer is a variable which store address of the another varibale....
    int a = 10;
    int *b = &a;
    int **q;
    q = &b;

    printf("%d\n", *b);
    printf("%d\n", a);
    printf("%d", &b);
}
