// #include <stdio.h>
// int checknumber(int num1)
// {
//     // int num1;
//     // printf("enter a number : ");
//     // scanf("%d", &num1);

//     if (num1 % 2 == 0)
//     {
//         printf("%d is even number\n", num1);
//     }
//     else
//     {
//         printf("%d is odd number\n", num1);
//     }
//     return num1;
// }

// int main()
// {

//   checknumber(10);
//     // printf("%d is odd or even number", ab);
// }

// // CHECK PRIME OR NOT PRIME NUMBER...

#include <stdio.h>

void checkprime()

{
    int num, flag = 0;
    printf("enter a number :");
    scanf("%d", &num);
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {

            flag = 1;
            break;
        }

    }
            if (flag == 1)
        {
            printf("%d is not prime number", num);
        }
        else
        {
            printf("%d is prime number", num);
        }
}
int main()
{
    checkprime();
}

// check maximum number...

#include<stdio.h>
void maximumnumber()
{
    int a,b;
    printf("enter number a :");
    scanf("%d",&a);
    printf("enter number b :");
    scanf("%d",&b);
    if(a<b)
    {
        printf("%d is big number",b);

    }
    else{
        printf("%d is big number",a);
    }
}
int main()
{
    maximumnumber();
}