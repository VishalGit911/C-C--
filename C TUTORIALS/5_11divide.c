#include <stdio.h>
int main()
{
    int A;
    printf("ENTER THE NUMBER:");
    scanf("%d", &A);
    if ((A % 5 == 0) && (A % 11 == 0))
    {
        printf("Given number is divide by 5 and 11.");
    }
    else
    {
        printf("Given number is not divide by 5 & 11.");
    }
}