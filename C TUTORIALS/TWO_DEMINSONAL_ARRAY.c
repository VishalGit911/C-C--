/*
 1 2 3      9 8 7
 4 5 6      6 5 4
 7 8 9      3 2 1
*/
#include <stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int sum;
    int multi;

    // printf("Enter the value for matrix: \n\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the value of [%d][%d]:", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the value of [%d][%d]: %d\n", i, j, matrix1[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", matrix1[i][j]);
        }
        printf("\n");
    }

    // For matrix2:

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the value of [%d][%d]:", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the value of [%d][%d]: %d\n", i, j, matrix2[i][j]);
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d", matrix2[i][j]);
        }
        printf("\n");
    }

    // For addition:

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    // For multiply:

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            multi = matrix1[i][j] * matrix2[i][j];
            printf("%d ", multi);
        }
        printf("\n");
    }
}