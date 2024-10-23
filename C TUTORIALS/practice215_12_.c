#include <stdio.h>
int main()
{
    int b = 200;

    b += 10;
    printf("add(10) b = %d\n", b);
    b -= 10;
    printf("sub(10)b = %d\n", b);
    b *= 5;
    printf("multi*(10)b = %d\n", b);
    b /= 10;
    printf("div(10)b = %d\n", b);
    b %= 10;
    printf("module(10)b = %d\n", b);
}