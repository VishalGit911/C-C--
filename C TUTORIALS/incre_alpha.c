#include <stdio.h>
int main()
{
    char alpha = 'A';
    for (int i = 65; i <= 69; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
    }
}