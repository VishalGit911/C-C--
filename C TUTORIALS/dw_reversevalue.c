#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value:"); // 13547
    scanf("%d", &num);

    int reverse;

    do
    {

        reverse = num % 10; // 13547%10
        printf("%d", reverse);

        num /= 10;

    } while (num > 0);
}
