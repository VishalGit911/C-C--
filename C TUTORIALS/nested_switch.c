#include <stdio.h>
int main()
{
    char plus;
    int choose;
    int value1, value2;
    int val1, val2, val3;

    printf("Press (+) For Summation.");
    scanf("%c", &plus);

    switch (plus)
    {
    case '+':

        printf("Press 2 for sum two value.\nPress 3 for sum  of 3 value.");
        scanf("%d", &choose);

        switch (choose)
        {
        case 2:
            printf("Enter a first value : ");
            scanf("%d", &value1);
            printf("Enter a second value : ");
            scanf("%d", &value2);

            printf("The sum of two number is %d\n", value1 + value2);

            break;

        case 3:
            printf("Enter a first value : ");
            scanf("%d", &val1);
            printf("Enter a second value : ");
            scanf("%d", &val2);
            printf("Enter a third value : ");
            scanf("%d", &val3);

            printf("The sum of three number is %d\n", val1 + val2 + val3);

            break;
        }

        break;

    default:
        break;
    }
}