#include <stdio.h>
int main()
{
    char check;
    printf("Enter Your Alphabate :");
    scanf("%c", &check);
    if (check > 'a' && check < 'z' || check > 'A' && check < 'Z')
    {
        printf("%c is alphabtae", check);
    }
    else if (check>'0' && check<'9')
    {
        printf("%c is number",check);
    }
    else
    {
        printf("%c is special charcter",check);
    }
}