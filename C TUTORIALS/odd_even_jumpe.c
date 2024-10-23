#include <stdio.h>
int main()
{
    int num;
    printf("enter a numbe : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
even:

    printf("%d is even number", num);
    exit(0);

odd:

    printf("%d is odd number", num);

}