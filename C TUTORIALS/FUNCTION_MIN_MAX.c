#include <stdio.h>
int findmax(int a, int b)
{
    return (a > b) ? a : b;
}
int findmin(int a, int b)

{
    return (a < b) ? a : b;
}
int main()
{
    int maximum = findmax(10, 20);
    int minimum = findmin(10, 20);

    printf("Maximum number: %d\n", maximum);
    printf("Minimum number: %d\n", minimum);
}