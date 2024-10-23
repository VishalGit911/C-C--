#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the values of a :");
    scanf("%d",&a);
    printf("enter the values of b :");
    scanf("%d",&b);
    printf("before swap a = %d and b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp; 
    printf("after swap a = %d and b = %d",a,b);
}