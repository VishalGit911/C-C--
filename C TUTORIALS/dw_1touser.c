#include <stdio.h>
int main()
{
    int first = 1;
    int second;
    printf("Enter the value:");
    scanf("%d", &second);
    do
    {
        printf("%d\n", first);
        first++;

    } while (first <= second);
}