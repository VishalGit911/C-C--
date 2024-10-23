#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], check;
    int i, a = 0;

    printf("Enter the string :");
    scanf("%s", &str);

    printf("Enter the character to check frquancy:");
    scanf(" ");
    scanf("%c", &check);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == check)
        {
            a++;
        }
    }
    printf("Your frquancy of '%c' is:%d", check, a);
}