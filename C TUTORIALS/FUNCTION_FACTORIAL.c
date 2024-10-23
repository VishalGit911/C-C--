#include <stdio.h>
int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i < number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int store = factorial(10);
    printf("THE FACTORIAL OF NUMBER :%d", store);
}