/*

THIS PROGRAM FOR CALCULATE TWO VALUE BY SWITCH CASE.......

*/

#include <stdio.h>
int main()
{
    int cal;

    printf("for + press 1\n");
    printf("for - press 2\n");
    printf("for * press 3\n");
    printf("for / press 4\n");

    scanf("%d", &cal);

    int x;

    int y;

    int z;

    switch (cal)
    {
    case 1:
        printf("for summetion...");
        printf("Enter 1 value");
        scanf("%d", &x);
        printf("Enter 2 value");
        scanf("%d", &y);

        z = x + y;
        printf("%d", z);
        break;

    case 2:

        printf("for summetion...");
        printf("Enter 1 value");
        scanf("%d", &x);
        printf("Enter 2 value");
        scanf("%d", &y);

        z = x + y;
        printf("%d", z);
        break;

    case 3:

        printf("for summetion...");
        printf("Enter 1 value");
        scanf("%d", &x);
        printf("Enter 2 value");
        scanf("%d", &y);

        z = x + y;
        printf("%d", z);
        break;

    case 4:

        printf("for summetion...");
        printf("Enter 1 value");
        scanf("%d", &x);
        printf("Enter 2 value");
        scanf("%d", &y);

        z = x + y;
        printf("%d", z);
        break;
    }
}