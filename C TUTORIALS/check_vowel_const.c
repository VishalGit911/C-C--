// write  a programme to check given char.. vowel or const...

#include <stdio.h>
int main()
{
    char check;
    printf("Enter Your Charcater :");
    scanf("%c", &check);
    if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' || check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U')
    {
        printf("%c is vowel",check);
 
    }
    else
    {
        printf("%c is constant",check);
    }
}