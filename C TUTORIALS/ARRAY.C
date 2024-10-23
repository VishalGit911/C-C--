#include <stdio.h>
int main()
{
    // statically

    int marks[5];
    marks[0] = 90;
    marks[1] = 63;
    marks[2] = 65;
    marks[3] = 93;
    marks[4] = 99;

    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80};

    printf("Bellow mentioned all marks......\n");

    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);

    printf("the values of number[%d] of %d\n", 2, numbers[2]);
    printf("the values of number[%d] of %d\n", 3, numbers[3]);
    printf("the values of number[%d] of %d\n", 7, numbers[7]);

    // dinamically.........

    int students_Id[] = {};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &students_Id[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the student id of studentid[%d] is value %d\n", i, students_Id[i]);
    }
}