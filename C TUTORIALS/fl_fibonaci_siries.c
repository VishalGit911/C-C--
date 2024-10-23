/*

fibonaki--- first 2 value +
            0,1,1,2,3,5,8.........

*/

#include <stdio.h>
int main()
{
    int a = 0; // first
    int b = 1; // second
    int c;     // third
    int value, i;

    // user get 10 then print 1 to 10
    printf("Enter the value:");
    scanf("%d", &value);

    // print first two no.
    printf("Fibonacci series:\n "); // print 0 1
    printf("%d %d ", a, b);

    // to get 3rd
    for (i = 2; i <= value; i++) // i=2 because first two value already print che
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}

// after swapping

// a = a + b;
// b = a - b;
// a = a - b;

// printf("After swap a=%d and b=%d", a, b);
