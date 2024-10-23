#include <stdio.h>
int main()
{
    int value = 0;

    do
    {
        printf("value:%d\n", value);
        --value;

    } while (value >= -100);
}