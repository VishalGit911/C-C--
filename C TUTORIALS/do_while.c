#include <stdio.h>
int main()
{
    /*

    syntax:

    do{
        statment;
    }while(conditon);

    */
    int value = 0;
    int sum = 0;

    do
    {
        printf("value %d.\n", value);
        value++;           // 2
        sum = sum + value; // 3

    } while (value <= 5);

    printf("the sum of all value is %d", sum);

    // printf("The sum of all value is %d\n", a);
}