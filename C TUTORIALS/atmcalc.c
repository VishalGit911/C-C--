/*THIS MY PROGRAM FOR ATM CALC*/

#include <stdio.h>

void main()
{
    int amount;
    printf("Enter your total money:");
    scanf("%d", &amount);
    int note2000 = 0;
    int note500 = 0;
    int note200 = 0;
    int note100 = 0;
    int note50 = 0;
    int note20 = 0;
    int note10 = 0;
    int note5 = 0;
    int note2 = 0;
    int note1 = 0;

    if (amount >= 2000)
    {
        note2000 = amount / 2000;
        amount = amount - (2000 * note2000);
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount = amount - (500 * note500);
    }
    if (amount >= 200)
    {
        note200 = amount / 200;
        amount = amount - (200 * note200);
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount = amount - (100 * note100);
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount = amount - (50 * note50);
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount = amount - (20 * note20);
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount = amount - (10 * note10);
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount = amount - (5 * note5);
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount = amount - (2 * note2);
    }
    if (amount >= 1)
    {
        note1 = amount / 1;
        amount = amount - (1 * note1);
    }

    printf("2000 =%d\n", note2000);
    printf("500 =%d\n", note500);
    printf("200 =%d\n", note200);
    printf("100 =%d\n", note100);
    printf("50 =%d\n", note50);
    printf("20 =%d\n", note20);
    printf("10 =%d\n", note10);
    printf("5 =%d\n", note5);
    printf("2 =%d\n", note2);
    printf("1=%d\n", note1);
}