#include <stdio.h>
int main()
{
    int m, n;
    printf("\n Enter the number of row and column: \n");
    scanf("%d %d", &m, &n);
    int array[10][10];
    printf("\n Enter the elements of the matrix: \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of [%d][%d]:", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n The elements in the matrix are: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += array[i][j];
        }
    }
    printf("\n Sum of all element is :%d", sum);
}