/*

String :
        String is collection of character array.

        - String is not supported directly in c programing,.
        - every srtring terminated with '\0' character.

    Syntax :

     char name[10];

     name[] = {'N','a','m','e','\0'};




*/

#include <stdio.h>
#include <string.h>

int main()
{

    printf("This is String Concept...\n");

    char array1[15] = {'T', 'R', 'U', 'E', 'L', 'I', 'N', 'E', '\0'};

    char array2[10] = "TRUELINE";

    // printf("%s", array2);

    // char name[20];

    // printf("Enter your name.\n");
    // // scanf("%s", &name);
    // gets(name);

    // // printf("Your name is %s\n", name);
    // puts(name);

    // char username[] = {};
    // fgets(username, 20, stdin);
    // puts(username);

    char value1[10] = "Hello";
    char value2[10] = " world";

    // printf("The length of value1 string is %d\n", strlen(value1));
    // printf("The compare value of two string is %d\n", strcmp(value1, value2));
    // printf("The conctrnate of two string is %s\n", strcat(value1, value2));
    printf("The copy string is %s\n", strcpy(value2, value1));

    printf(" %s", value1);

    char str[100];
    int i, lenght = 0;

    printf("Enter the string :");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        lenght++;
    }

    printf("Lenght of input string: %d", lenght);
}