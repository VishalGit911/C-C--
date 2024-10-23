// THIS IS MY PROGRAM FOR AREA RECTENGLE,Circle & SQURE

#include <stdio.h>

void main()
{

    // FOR AREA:RECTENGL

    float length, width, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %f\n", area);

    // FOR AREA: CIRCLE

    float const pi = 3.14;
    int r;
    printf("Enter The Radius of Cicle:");
    scanf("%d", &r);
    printf("The radius of the circle is %d\n", r);
    float A;
    A = pi * r * r;
    printf("The area circle is %f\n", A);

    // FOR AREA: SQUARE

    int a, z;
    printf("Enter The value of square:");
    scanf("%d", &a);

    // here z=a.........

    // float z;
    z = a * a;
    printf("The area of square is %d\n", z);
}
