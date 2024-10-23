
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

    //
    // h
    //

    if ((english >= 40) && (maths >= 40) && (s_s >= 40) && (computer >= 40) && (s_p >= 40))
    {
        total = english + maths + s_s + computer + s_p;
        printf("Total of all subjects : %f\n", total);

        total = total / 500;
        total = total * 100;

        printf("Percentage:%f\n`", total);

        if ((total <= 100) && (total > 95))
        {
            printf("Your grade is A+....\n");
        }
        else if ((total <= 95) && (total > 90))
        {
            printf("Your grade is A........\n");
        }
        else if ((total <= 90) && (total > 80))
        {
            printf("Your grade is B+........\n");
        }
        else if ((total <= 80) && (total > 70))
        {
            printf("Your grade is B ........\n");
        }
        else if ((total <= 70) && (total > 60))
        {
            printf("Your grade is C........\n");
        }
        else if ((total <= 60) && (total > 50))
        {
            printf("Your grade is D........\n");
        }
        else
        {
            printf("TQ");
        }
    }
    else
    {
        printf("YOU ARE FAILED..");
    }

    /*if ((english >= 40))
     {
         if ((maths >= 40))
         {
             if ((s_s >= 40))
             {
             }
             else
             {
                 printf("YOU ARE FAILED");
             }
         }
         else
         {
             printf("YOU ARE FAILED");
         }
         else
         {
             printf("YOU ARE FAILED");
         }
     }

     /*if ((s_s >= 40))
     {
     }
     else
     {
         printf("YOU ARE FAILED");
     }

     if ((computer >= 40))
     {
         printf("YOU ARE PASS");
     }
     else
     {
         printf("YOU ARE FAILED");
     }

     if ((s_p >= 40))
     {
         printf("YOU ARE PASS");
     }
     else
     {
         printf("YOU ARE FAILED");
     }*/
}
