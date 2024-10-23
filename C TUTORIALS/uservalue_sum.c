#include <stdio.h>
int main()
{
    /*int value;
     printf("Enter the value for summetion:"); // 1234
     scanf("%d", &value);*/

    int a;
    int sum = 0;

    while (a <= 10)
    {
        printf("Enter the value for summetion:");
        scanf("%d", &a);
        sum = sum + a;
        printf("summetion of given value is:%d", sum);
    }
}