#include <stdio.h>
int fibonacci(int range)
{
    int a = 0, b = 1, c;
    while (a < range)
    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int range;

    printf("Enter range:");
    scanf("%d", &range);

    printf("The fibonacci series is: \n");

    fibonacci(range);
}
