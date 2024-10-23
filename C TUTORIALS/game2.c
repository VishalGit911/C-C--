#include <stdio.h>
int main()
{

    // syntax:do{statment}while(condion);

    int value;
    int sum = 0;
    do
    {
        printf("Enter the value:");
        scanf("%d", &value);
        // value % 2 == 0 ? printf("Even\n") : printf("Odd\n");
        sum = sum + value;

    } while (value < 5);

    printf("sum of all value is:%d\n", sum);
    sum % 2 == 0 ? printf("Even\n") : printf("Odd\n");
}