#include <stdio.h>
#include <stdio.h>
int main()
{
    char str[100];
    int i, lenght = 0;

    printf("Enter the string :");
    scanf("%s", &str);

    for (i = 0; str[i] != '\0'; i++)
    {
        lenght++;
    }

    printf("Lenght of input string: %d", lenght);
}