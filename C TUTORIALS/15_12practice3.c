#include <stdio.h>
int main()
{
//     int c = 205;
     int c;
     printf("enter ther value of c :");
     scanf("%d",&c);    
    c += 10;
    printf("add(10) c = %d\n", c);
    c -= 10;
    printf("sub(10)c = %d\n", c);
    c *= 5;
    printf("multi*(10)c = %d\n", c);
    c /= 10;
    printf("div(10)c = %d\n", c);
    c %= 10;
    printf("module(10)a = %d\n", c );
}