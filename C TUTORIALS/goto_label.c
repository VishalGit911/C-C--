
/*
count
sum
average
min
max
*/

#include <stdio.h>

int main()
{

    int num, count = 0, sum = 0, min, max;
    float average;

    printf("Enter The Value For sum calculation and please enter the value greater than 0 and for exit press 0 : \n");

input:

    scanf("%d", &num);

    if (num < 0)

        goto output;

    else if (count == 0)
    {
        count++;
        min = max = num;
        sum += num;
    }
    else if (count >= 1)
    {
        if (max < num)
            max = num;
        if (min > num)
            min = num;

        sum += num;

        count++;
    }
    if (num > 0)
    {
        goto input;
    }

output:

    average = sum / count;

    printf("The total enterd value is %d\n", count);
    printf("The sum of total number is %d\n", sum);
    printf("The minimum value is %d\n", min);
    printf("The maximum value is %d\n", max);
    printf("Total average of count is %.2f\n", average);

    return 0;
}