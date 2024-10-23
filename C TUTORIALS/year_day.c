/*

2. THIS PROGRAM FOR CONVERT YEARS INTO DAYS AND DAYS INTO YEARS

*/

#include <stdio.h>

int main()
{
    // years into days
    int x;
    int const day = 365;

    printf("Enter the year = ");
    scanf("%d", &x);

    printf("%d\n", x * day);

    // days into years
    int y;

    printf("Enter the day = ");
    scanf("%d", &y);

    printf("%d", y / day);
}