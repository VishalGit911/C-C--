#include <stdio.h>

int main()
{

    int array[5];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("BEFORE SWAPPING VALUE..\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nAFTER SWAPPING VALUE....\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }
}