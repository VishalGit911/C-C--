//       ---                                 factorial number in c                                   ---

// #include<stdio.h>
// int factorial(int num)
// {
//     int fact = 1;
//     // int num;
//     // printf("enter a number :");
//     // scanf("%d",&num);
//     for(int i=1;i<=num;i++)
//     {
//         fact = fact * i;
//     }
//     // printf("factorial number is %d ",fact);
//      return fact;
// }

// int main()
// { 
//      int strore = factorial(6);
//      printf("%d is your febonaci",strore);
// }

// fibonaci series in c

#include <stdio.h>
void febonaci(int n)                            
{
    int first = 0;
    int second = 1;
    int third;
    for (int i = 2; i <= n; i++)
    {
        third = first + second;
        first = second;
        second = third;
    }
    printf("%d is your series", third);
}

int main()
{
    febonaci(10);
}   