#include <stdio.h>
int prime(int value)

{
    int i;
    int flag = 0;

    for (int i = 2; i <= value / 2; i++) // if n is dividable by i ,than value is not prime
    {
        if (value % i == 0)
        {
            flag = 1; // flag 1 for non prime no
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d is prime number.\n", value);
    }
    else
    {
        printf("%d is not  prime number.\n", value);
    }
}
int main()
{
    prime(7);
}