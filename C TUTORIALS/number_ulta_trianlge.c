#include <stdio.h>
int main()
{
    // int num;
    // printf("enter a number : ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // for (int i = 5 ; i >= 1; i--)
    // {
    // // int num = 5;
    //     for (int j = 5; j >= i; j--)
    //     {
    //         printf("%d",j);
    //         // num--;
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = i ; j >=1; j--)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");

    // }

    // for (int  i = 1; i <=5; i++)
    // {
    //     for (int  j = i; j <=5; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");

    // }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
