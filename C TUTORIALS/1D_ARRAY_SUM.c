#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int array[size];
    int i;
    printf("Enter the array element: \n", array[size]);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array elements are :", array[size]);
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }

    // printf("\nSum of all array elements is %d:", sum);
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
        // printf(" %d ", sum);
    }
    printf("\nSum of all array elements is : %d", sum);
}