#include <stdio.h>
int main()
{
   int a = 10, b = 100;
   printf("enter a number :");
   scanf("%d %d",&a,&b);
   if(a<b)
   {
      printf(" b is max");
   }
   else
   {
      printf(" a  is max");
   }
}