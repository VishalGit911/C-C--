
#include <stdio.h>

void twoswap(int a, int b)

{

    a = a + b;
    b = a - b;
    a = a - b;
    printf("a= %d and b = %d", a, b);
}
void threeswap(int a, int b, int c)
{
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("a = %d , b = %d and c = %d", a, b, c);
}
void fourswap(int a, int b, int c, int d)

{
    int temp;
    temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
    printf("a = %d , b = %d  , c = %d , d = %d ", a, b, c, d);
}
int main()
{
    int choice;
    printf(" 1. two value\n");
    printf(" 2. three value\n");
    printf(" 3. four value\n");
    printf("enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
    {
        int a1, b2;
        printf("enter value of a : ");
        scanf("%d", &a1);
        printf("enter value of b : ");
        scanf("%d", &b2);
        printf("a = %d and b = %d\n", a1, b2);
        twoswap(a1, b2);
        break;
    }
    case 2:
    {
        int a1, b2, c3;
        printf("enter value of a : ");
        scanf("%d", &a1);
        printf("enter value of b : ");
        scanf("%d", &b2);
        printf("enter value of c : ");
        scanf("%d", &c3);
        threeswap(a1, b2, c3);
        break;
    }
    case 3:
    {
        int a1, b2, c3, d4;
        printf("enter value of a : ");
        scanf("%d", &a1);
        printf("enter value of b : ");
        scanf("%d", &b2);
        printf("enter value of c : ");
        scanf("%d", &c3);
        printf("enter value of d : ");
        scanf("%d", &d4);
        fourswap(a1, b2, c3, d4);
        break;
    }
    }
}