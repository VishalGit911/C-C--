#include<stdio.h>
int main()

{
    int n1;
    printf("Enter The Vlaue Of Number 1 :");
    scanf("%d",&n1);
    n1+=10;
    printf("num = %d\n",n1);
    n1-=10;
    printf("num = %d\n",n1);
    n1*=50;
    printf("num = %d\n",n1);
    n1/=2;
    printf("num = %d\n",n1);
    n1%=3;
    printf("num = %d",n1);

}