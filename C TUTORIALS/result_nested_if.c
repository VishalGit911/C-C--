/*THIS IS MY PROGRAM FOR GIVEN GRADE BY IF....ELSE....IF..STATEMENT.....*/

#include <stdio.h>

int main()
{
    int english;
    int maths;
    int s_s;
    int computer;
    int s_p;

    printf("ENTER THE MARKS OF ENGLISH:");
    scanf("%d", &english);

    printf("ENTER THE MARKS OF MATHS:");
    scanf("%d", &maths);

    printf("ENTER THE MARKS OF S_S:");
    scanf("%d", &s_s);

    printf("ENTER THE MARKS OF COMPUTER:");
    scanf("%d", &computer);

    printf("ENTER THE MARKS OF S_P:");
    scanf("%d", &s_p);

    float total;
    total = english + maths + s_s + computer + s_p;
    printf("Total of all subjects : %f\n", total);

    total = total / 500;
    total = total * 100;

    printf("Percentage:%f\n`", total);

    if ((total <= 100) && (total > 95))
    {
        printf("Congretulation you are pass with A+ grade....\n");
    }
    else if ((total <= 95) && (total > 90))
    {
        printf("Congratulations you are pass with A grade....\n");
    }
    else if ((total <= 90) && (total > 80))
    {
        printf("Congratulations you are pass with B+ grade....\n");
    }
    else if ((total <= 80) && (total > 70))
    {
        printf("Congratulations you are pass with B grade....\n");
    }
    else if ((total <= 70) && (total > 60))
    {
        printf("Congratulations you are pass with C grade....\n");
    }
    else if ((total <= 60) && (total > 50))
    {
        printf("Congratulations you are pass with D grade....\n");
    }
    else
    {
        printf("sorry you are Fail....");
    }

    // for subject wise pass and failed

    if ((english <= 40))
    {
        printf("YOU ARE FAILED");
    }
    else
    {
        printf("YOU ARE PASS");
    }
}
