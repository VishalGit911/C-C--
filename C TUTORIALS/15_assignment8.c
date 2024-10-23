#include<stdio.h>
int main()

{
    int n2;
    printf("enter the value :");
    scanf("%d",& n2);
    n2+=105601;
    printf("num = %d\n",n2);
    n2-=1000;
    printf("num = %d\n",n2);
    n2*=500;
    printf("num = %d\n",n2);
    n2/=20;
    printf("num = %d\n",n2);
    n2%=31;
    printf("num = %d",n2);

}