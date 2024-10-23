#include <stdio.h>
int evenodd(int a)
{

    a % 2 == 0 ? printf("Even\n") : printf("Odd\n");
}
int main()
{
    evenodd(6);
}