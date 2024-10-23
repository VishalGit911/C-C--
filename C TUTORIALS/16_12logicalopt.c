#include <stdio.h>
int main()
{
    int a = 17, b = 19;
    // printf("enter number a : ");
    // scanf("%d",&a);
    // printf("enter number b :");
    // scanf("%d",&b);
    printf("you can drive\n", (a < b) && (a > b));
    printf("you can drink rasna bottle \n", (a < b) || (a > b));
    printf("you can not drive \n", !(a > b));
}