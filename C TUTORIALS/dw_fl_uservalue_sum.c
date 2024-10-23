#include <stdio.h>
int main()
{
    int a;
    int sum = 0;
    do
    {
        printf("Enter the value:");
        scanf("%d", &a);
        sum = sum + a;
    } while (a != 0);
    printf("sum of all value is:%d\n", sum);

    /*for (int a = 1; a != 0; a++)
    {
        printf("a=%d", a);
    }*/

    // int a = 1;
    // while (a <= 100)
    // {
    //     printf("Enter the value:");
    //     scanf("%d", &a);
    //     a++;
    //     do
    //     {
    //
    //     } while (a != 1000);
    // }
}
