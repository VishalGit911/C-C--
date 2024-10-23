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

    printf("\nArray elements in reverse order : ");

    for (i = size - 1; i >= 0; i--)
    {
        printf(" %d ", array[i]);
    }
}