#include <stdio.h>

int main()

{
    int A = 10;
    int B = 20;

    // 1). ARITHMETIC OPERETOR
    //     + - * / % ++ --

    printf("A + B = %d \n", A + B);
    printf("A - B = %d \n", A - B);
    printf("A * B = %d \n", A * B);
    printf("A / B = %d \n", A / B);
    printf("A % B = %d \n", A % B);

    /* increment & decrement ++ --

       pre increment & post increment
       ++a             a++

       pre decrement & post decrement
       --A             A--
       */

    // pre-post increment:

    printf("post increment A++ = %d \n", A++);
    printf("pre increment ++A = %d \n", ++A);

    // pre-post decrement:

    printf("post decrement A-- = %d \n", A--);
    printf("%d \n", A);
    printf("pre increment --A = %d \n\n", --A);

    // 2). RELETIONAL OPERETOR
    //     < > <= >= == !=

    printf("A < B = %d \n", A < B);
    printf("A > B = %d \n", A > B);
    printf("A <= B %d \n", A <= B);
    printf("A >= B %d \n", A >= B);
    printf("A == B %d \n", A == B);
    printf("A != B %d \n\n", A != B);

    // 3). ASSIGNMNENT OPERETER
    //     += -= *= /= %= =

    printf("A += B = %d \n", A += B);   // A= A+B;
    printf("A -= B = %d \n", A -= B);   // A= A-B;
    printf("A *= B = %d \n", A *= B);   // A= A*B;
    printf("A /= B = %d \n", A /= B);   // A= A/B;
    printf("A %= B = %d \n\n", A %= B); // A= A%B;

    // 4). LOGICAL OPERETOR
    // && || !

    printf("LOGICAL AND = %d \n", (A < B) && (A > B));
    printf("LOGICAL OR = %d \n", (A < B) || (A > B));
    printf("LOGICAL NOT = %d \n\n", !(A < B));

    // 5). BITWISE OPERETOR
    // & | ^ << >>

    printf("BITWISE AND = %d \n", 10 & 15);
    printf("BITWISE OR = %d \n", 10 | 15);
    printf("BITWISE XOR = %d \n", 10 ^ 15);
    printf("BITWISE LEFTSHIFT = %d \n", 10 << 2);
    printf("BITWISE RIGHTSHIFT = %d \n\n", 10 >> 2);

    // 6). MISSLEOUNS OPERETOR
    //     SIZEOF()  * . () ? : &

    double hello = 9.0000;
    char value = '@';

    printf("SIZE of hello is %d\n", sizeof(hello));
    printf("SIZE of value is %d\n\n", sizeof(value));

    // TEARNY OPERATOR

    (A > B) ? printf("the condition is right.") : printf("the codition is wrong.");

    int input;

    scanf("%d", &input);
}
