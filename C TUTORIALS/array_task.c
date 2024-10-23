#include <stdio.h>
int main()
{
    // int size, max1;
    // printf("enter the sixe of array : ");
    // scanf("%d", &size);
    // int max[size];
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &max[i]);
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("array value is (%d) : %d\n", i, max[i]);
    // }
    // max1 = max[0];
    // for (int i = 0; i < size; i++)
    // {
    //     if (max[i] > max1)
    //     {

    //         max1 = max[i];
    //     }
    // }
    // printf("the array maximum value is %d",max1);

    // short array five elemnts ...
    //   2

    // int size;
    // int temp;
    // printf("enter your array size : ");
    // scanf("%d", &size);
    // int arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("array value is (%d) : %d\n", i, arr[i]);
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    //     for (int i = 0; i < size; i++)
    //     {
    //         for (int j = i + 1; j < size; j++)
    //         {
    //             if (arr[i] > arr[j])
    //             {
    //                 temp = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //             }
    //         }
    //     }
    //   for (int i = 0; i < size; i++)
    //   {
    //     printf("asseding order is %d : %d\n",i,arr[i]);
    //   }

    //   for (int i = 0; i < size; i++)
    //     {
    //         for (int j = i + 1; j < size; j++)
    //         {
    //             if (arr[i] < arr[j])
    //             {
    //                 temp = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //             }
    //         }
    //     }        
    //   for (int i = 0; i < size; i++)
    //   {
    //     printf("desending  order is %d : %d\n",i,arr[i]);
    //   }

    // 4
    int sum, sub, mul, div;
    int array1[3][3];
    int array2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value  array : ");
            scanf("%d", &array1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value  array  %d  %d : %d\n", i, j, array1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("enter the value  array  %d  %d : %d\n", i, j, array1[i][j]);
    //     }
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value  array : ");
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value  array  %d  %d : %d\n", i, j, array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = array1[i][j] + array2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub = array1[i][j] - array2[i][j];
            printf("%d ", sub);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul = array1[i][j] * array2[i][j];          
            printf("%d ", mul);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            div = array1[i][j] / array2[i][j];
            printf("%d ", div);
        }
        printf("\n");
    }
}