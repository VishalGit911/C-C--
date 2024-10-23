#include <stdio.h>
int main()
{
    // for (int i = 45; i <= 49; i++)
    // {
    //     for (int j = 45; j <= i; j++)
    //     {
    //         printf("%d  ", j);
    //     }
    //     printf("\n");
    // }

    // int num = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ",num);
    //         num++;
    //     }
    //     printf("\n");
    // }
    //     for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=5;i++)
    // {
    //     for(int k=4;k>=i;k--)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // int z = 0;
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int k = 0; k < 5 - i; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    //     for(int  i =1;i<=5;i++)
    // {
    //     for(int k=2;k<=i;k++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=i;j<=5;j+ +)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 9; j++)
    //     {
    //         if (i == 1 && j == 5 || i == 2 && j == 4 || i == 2 && j == 6 || i == 3 && j == 3 ||
    //         i == 3 && j == 7 || i == 4 && j == 2 || i == 4 && j == 8 || i == 5 && j == 1 || i == 5 && j == 9)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=i;j>=1;j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    // for(int i=4;i>=1;i--)
    // {
    //     for(int j=i;j>=1;j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 2; i <= 5; i++)
    {
        for (int k = 2; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}