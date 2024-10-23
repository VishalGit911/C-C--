#include<stdio.h>
int main()
{
    int p;
    float r,n,i;
    printf("enter you give money :");
    scanf("%d",&p);
    printf("enter your rate of interst :");
    scanf("%f",&r);
    printf("enter your number of periods :");
    scanf("%f",&n);
    i = (p*r*n)/100;
    printf("your simple insterst is %.2f",i);
}