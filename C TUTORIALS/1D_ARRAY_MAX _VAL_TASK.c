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
        printf("\n %d ", array[i]);
    }

    int max = array[0];
    for (i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("\n Max value is :%d", max);
}
