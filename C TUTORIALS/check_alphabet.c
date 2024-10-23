#include<stdio.h>
int main()
{
    char check;
    printf("Enter Your Alphabate :");
    scanf("%c",&check);
    if(check>'a'&& check<'z'|| check>'A' && check<'Z')
    {
        printf("%c is alphabate",check);
    }
    else{
        printf("%c is not alphabate",check);
    }
}