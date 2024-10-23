#include<stdio.h>
// THIS IS CODE FOR ENTER NUMBER CONVERT TO DAYS AND WEEKS...
int main()
{
    int  day , year;
    printf("enter the number of days :");
    scanf("%d",&day);
    // days = (day * 365);
    year = day / 365;
    // printf("%d is your number to %d year , %d days",day , year );
    printf("%d is your number to %d year",year);
}