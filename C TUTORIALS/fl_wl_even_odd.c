#include <stdio.h>
int main()
{
    /*WHILE LOOP*/
    // int a = 1;
    int evensum = 0;
    int oddsum = 0;
    // while (a <= 100)
    // {
    //     printf("value of a:%d", a);

    //     (a % 2 == 0 ? printf("Even\n") : printf("Odd\n"));
    //     a++;
    // }

    // FOR LOOP
    for (int a = 1; a <= 100; a++)
    {
        printf("%d", a);
        if (a % 2 == 0)
        {
            printf("Even\n");
            evensum = evensum + a;
        }
        else
        {
            printf("Odd\n");
            oddsum = oddsum + a;
        }
    }
    printf("sum of all even value is:%d\n", evensum);
    printf("sum of all odd value is:%d", oddsum);
}
