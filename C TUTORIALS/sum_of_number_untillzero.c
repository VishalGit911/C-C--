
#include<stdio.h>
int main()
{
    int num,sum=0;
    do{
        printf("enter any number :");
        scanf("%d",&num);
        sum = sum + num;
    }
    while(num!=0);
        printf("sum is %d",sum);
}