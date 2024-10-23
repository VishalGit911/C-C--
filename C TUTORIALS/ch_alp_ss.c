/*

THIS MY PROGRAM TO CHECK GIVEN NUMBER FROM USER IS ALPHABET/DIGIT/SPECIALSYMBOL

*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Give me some random alphabet/digit/specialsymbol:");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special symbol.", ch);
    }
}