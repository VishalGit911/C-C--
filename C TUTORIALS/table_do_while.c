#include<stdio.h>
int main()
{
    int num,i=1;
    printf("enter any number : ");
    scanf("%d",&num);
    do
    {
        printf("%d * %d  = %d\n",num,i,num*i);
        i++;
    } while (i <= 10);
    
}