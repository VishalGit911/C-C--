#include <stdio.h>

void sum(int a, int b)
{
    int c = a + b;
    printf("the both number sum is %d",c);
}
void substraction(int a, int b)
{
    int c = a - b;
    printf("the both number substraction is %d",c);
}
void multiplication(int a, int b)
{
    int c = a * b;
    printf("the both number multiplcation is %d",c);
}
void divison(int a, int b)
{
    int c = a / b;  
    printf("the both number is divison is %d",c);
}
void modulo(int a,int b)
{
    int c = a % b;
    printf("the both number modulo is %d",c);
}
int main()
{
     
    char repeat;
    int choice;
   do{
    printf("1. addition\n");
    printf("2. substaction\n");
    printf("3. multiplication\n");
    printf("4. divison\n");
    printf("5. modulo\n");
    printf("enter your choicde : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int a, b;
        printf("enter value of a : ");
        scanf("%d", &a);
        printf("enter value of b : ");
        scanf("%d", &b);
        sum(a, b);
        break;
    }
    case 2:
    {
        int a, b;
        printf("enter value of a : ");
        scanf("%d", &a);
        printf("enter value of b : ");
        scanf("%d", &b);
        substraction(a, b);
        break;
    }
    case 3:
    {
        int a, b;
        printf("enter value of a : ");
        scanf("%d", &a);
        printf("enter value of b : ");
        scanf("%d", &b);
        multiplication(a, b);
        break;
    }
    case 4:
    {
        int a, b;
        printf("enter value of a : ");
        scanf("%d", &a);
        printf("enter value of b : ");
        scanf("%d", &b);
        divison(a, b);
        break;
    }
    case 5:
    {
        int a,b;
        printf("enter the value of a : ");
        scanf("%d",&a);
        printf("enter the value of b : ");
        scanf("%d",&b);
        modulo(a,b);
        break;
    }
    default :
    printf("please enter write choice...!!!");
    }
         printf("Enter Y for continue and N for finished your order");
        scanf(" ");
        scanf("%c", &repeat);
    }while(repeat == 'y' || repeat =='Y');
}