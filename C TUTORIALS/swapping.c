/*

4.THIS PROGRAM FOR SWAPPING 2 VALUE

*/
#include <stdio.h>

void main()
{
    // swap two numbers without using third variable

    int a;
    int b;

    // before swapping

    printf("Enter the value of A =");
    scanf("%d", &a);
    printf("Enter the value of b =");
    scanf("%d", &b);

    printf("Before swap a=%d\n", a);
    printf("Before swap b=%d\n", b);

    // after swapping

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap a=%d and b=%d", a, b);
}