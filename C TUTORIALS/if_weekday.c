/*

THIS IS MY PROGRAM TO GET USER WEEK DAYS........

*/

#include <stdio.h>
int main()
{
    /*char x;
    printf("Enter the charecter=");
    scanf("%c", &x);

     //char s = 's';
     //char m = 'm';
     //char t = 't';
     //char w = 'w';
     //char t = 't';
     //char f = 'f';
     //char s = 's';

    if (x == 's')
    {
        printf("sunday.....");
    }
    if (x == 'm')
    {
        printf("Monday.....");
    }
    if (x == 't')
    {
        printf("tuesday.....");
    }
    if (x == 'w')
    {
        printf("wednesday.....");
    }
    if (x == 't')
    {
        printf("thursday.....");
    }
    if (x == 'f')
    {
        printf("friday.....");
    }
    if (x == 's')
    {
        printf("saturday");
    }
    else
    {
        printf("no any days found...");
    }*/

    printf("Press 1 to print SUNDAY\n");
    printf("Press 2 to print MONDAY\n");
    printf("Press 3 to print TUESDAY\n");
    printf("Press 4 to print WEDNESDAY\n");
    printf("Press 5 to print THURSDAY\n");
    printf("Press 6 to print FRIDAY\n");
    printf("Press 7 to print SATURDAY\n");

    int day;
    printf("Enter the value:");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("SUNDAY");
        break;
    case 2:
        printf("MONDAY");
        break;
    case 3:
        printf("TUESDAY");
        break;
    case 4:
        printf("WEDNESDAY");
        break;
    case 5:
        printf("THURSDAY");
        break;
    case 6:
        printf("FRIDAY");
        break;
    case 7:
        printf("SATURDAY");
        break;
    default:
        printf("No match any number");
    }
}
