/*

pelindrome number= 1001----reverse-----same 1001

*/

#include <stdio.h>
int main()
{
    int num;
    int remove;
    int new_value = 0;
    int old_value;

    printf("Enter the value:");
    scanf("%d", &num);

    old_value = num; // 1234

    while (num > 0)
    {
        remove = num % 10;
        new_value = new_value * 10 + remove;
        num = num / 10;
    }

    if (new_value == old_value)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is Not palindrome");
    }
}