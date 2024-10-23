#include<stdio.h>
int main()
{
    int check_day;
    printf("Enter Number between 1 or 7 :");
    scanf("%d",&check_day);
    if(check_day == 0)
    {
        printf("Sunday");
    }
    else if (check_day == 1)
    {
        printf("Monday");
    }
    else if (check_day == 2)
    {
        printf("Tuesday");
    }
    else if (check_day == 3)
    {
        printf("Wednesday");
    }
    else if(check_day == 4)
    {
        printf("Thursday");
    }
    else if(check_day ==5)
    {
        printf("Friday");
    }
    else if(check_day == 6)
    {
        printf("Saturday");
    }
    else{
        printf("You entered invalid input !!!");
    }
}