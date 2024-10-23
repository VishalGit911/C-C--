#include <stdio.h>
int main()
{
//  is the p rint loop from the right side....
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf(" ");
        }
        for (int j = 5; j < num - i; j++)
        {
            printf("*");
        }
        printf("/n");
    }
}