#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, lenght;

    printf("Enter the string :\n");
    scanf("%s", &str);

    lenght = strlen(str);

    for (i = lenght - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
