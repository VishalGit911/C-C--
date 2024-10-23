/*

1234 =  4+3+2+1 = 10;


*/

#include <stdio.h>
int main()
{
    // int a;
    // int n;
    // int sum = 0;

    // for (int a = 1; a < n; a++)
    // {
    //     printf("Enter the value:");
    //     scanf("%d", a);
    //     sum = sum + a;
    //     printf("all value sum%d", a);
    // }

    int num, store;
    int sum = 0;

    printf("Enter a value for sum : ");
    scanf("%d", &num);

    while (num > 0)
    {
        store = num % 10;

        sum = sum + store; // 7

        num = num / 10; // 1
    }

    printf("The total sum of all value is %d\n", sum);
}
