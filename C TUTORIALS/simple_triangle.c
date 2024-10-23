#include <stdio.h>
int main()
{
    // for(int i = 1;i<=5;i++)
    // {
    //      for(int j = 1;j<=i;j++)
    //      {
    //         printf("* ");
    //      } 
    //      printf("\n");
    // }

    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}