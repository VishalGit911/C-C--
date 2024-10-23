#include<stdio.h>
int main()

{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    n+=10;
    printf("num = %d\n",n);
    n-=10;
    printf("num = %d\n",n);
    n*=20;
    printf("num = %d\n",n);
    n/=10;
    printf("num = %d\n",n);
    n%=10;
    printf("num = %d",n);

}