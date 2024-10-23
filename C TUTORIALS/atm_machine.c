#include <stdio.h>
int main()
{
    int note_2000 = 0;
    int note_500 = 0;
    int note_200 = 0;
    int note_100 = 0;
    int note_50 = 0;
    int note_20 = 0;
    int note_10 = 0;
    int money;

    printf("Enter Your Money Sir :");
    scanf("%d", &money);

    if (money >= 2000)
    {
        note_2000 = money / 2000; // 2
        money = money - note_2000 * 2000;
    }
    if (money >= 500)
    {
        note_500 = money / 500;
        money = money - 500 * note_500;
    }
    if (money >= 200)
    {
        note_200 = money / 200;
        money = money - 200 * note_200;
    }
    if (money >= 100)
    {
        note_100 = money / 100;
        money = money - 100 * note_100;
    }
    if (money >= 50)
    {
        note_50 = money / 50;
        money = money - 50 * note_50;
    }
    if (money >= 20)
    {
        note_20 = money / 20;
        money = money - 20 * note_20;
    }
    if (money >= 10)
    {
        note_10 = money / 10;
        money = money = 10 * note_10;
    }
    printf("2000 note is %d\n", note_2000);
    printf("500 note is %d\n", note_500);
    printf("200 note is %d\n", note_200);
    printf("100 note is %d\n", note_100);
    printf("50 note is %d\n", note_50);
    printf("20 note is %d\n", note_20);
    printf("10 note is %d\n", note_10);
}