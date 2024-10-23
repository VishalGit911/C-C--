/*

THIS IS MY BASIC CALCULATER PROGRAM

*/

#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;

    printf("Enter the value of a =");
    scanf("%d", &a);

    printf("Enter the value of b =");
    scanf("%d", &b);

    // ARITHMETIC OPERETOR

    // FOR PLUS

    c = a + b;
    printf("value of sum of c=%d \n", c);

    // FOR MINUS

    c = a - b;
    printf("value of c=%d \n", c);

    // FOR MULTIPLY

    c = a * b;
    printf("value of c=%d \n", c);

    // FOR division

    c = a / b;
    printf("value of c=%d \n", c);

    // FOR MODULO

    c = a % b;
    printf("value of c=%d \n", c);

    // FOR POST INCREMENT

    c = a++;
    printf("value of c=%d \n", c);

    // FOR PRE INCREMENT

    c = ++b;
    printf("value of c=%d \n", c);

    // FOR POST DICREMENT

    c = a--;
    printf("value of c=%d \n", c);

    // FOR PRE DICREMENT

    c = --b;
    printf("value of c=%d \n", c);

    // RELETIONAL OPERETOR

    c = a < b;
    printf("value of c=%d \n", c);

    c = a > b;
    printf("value of c=%d \n", c);

    c = a <= b;
    printf("value of c=%d \n", c);

    c = a >= b;
    printf("value of c=%d \n", c);

    c = a == b;
    printf("value of c=%d \n", c);

    c = a != b;
    printf("value of c=%d \n", c);

    // ASSIGNMENT OPERETOR

    c = a += b;
    printf("value of c=%d \n", c);

    c = a -= b;
    printf("value of c=%d \n", c);

    c = a *= b;
    printf("value of c=%d \n", c);

    c = a /= b;
    printf("value of c=%d \n", c);

    c = a %= b;
    printf("value of c=%d \n", c);

    // LOGICAL OPERETOR

    c = a && b;
    printf("value of c=%d \n", c);

    c = a || b;
    printf("value of c=%d \n", c);

    // BITWISE OPERETOR

    c = a & b;
    printf("value of c=%d \n", c);

    c = a | b;
    printf("value of c=%d \n", c);

    c = a ^ b;
    printf("value of c=%d \n", c);

    c = a << b;
    printf("value of c=%d \n", c);

    c = a >> b;
    printf("value of c=%d \n", c);
}
