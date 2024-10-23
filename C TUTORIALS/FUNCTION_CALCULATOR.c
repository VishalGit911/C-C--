
#include <stdio.h>
int addition(int x, int y)
{

    int sum;

    sum = x + y;
    printf("SUM=%d", sum);
}
int substraction(int x, int y)
{
    int sub;

    sub = x - y;
    printf("SUB=%d", sub);
}
int division(int x, int y)
{
    int div;

    div = x / y;
    printf("DIV=%d", div);
}
int multiplication(int x, int y)
{
    int multi;

    multi = x * y;
    printf("MULTI=%d", multi);
}
int main()
{
    char cal;

    printf("for + press 1\n");
    printf("for - press 2\n");
    printf("for / press 3\n");
    printf("for * press 4\n");

    scanf("%c", &cal);
    switch (cal)
    {
    case '+':
    {
        int val1, val2;

        printf("for summetion...\n");
        printf("Enter 1 value=");
        scanf("%d", &val1);
        printf("Enter 2 value=");
        scanf("%d", &val2);
        addition(val1, val2);
        break;
    }
    case '-':
    {
        int val1, val2;

        printf("for substraction...\n");
        printf("Enter 1 value=");
        scanf("%d", &val1);
        printf("Enter 2 value=");
        scanf("%d", &val2);
        substraction(val1, val2);
        break;
    }
    case '/':
    {
        int val1, val2;

        printf("for division...\n");
        printf("Enter 1 value=");
        scanf("%d", &val1);
        printf("Enter 2 value=");
        scanf("%d", &val2);
        division(val1, val2);
        break;
    }
    case '*':
    {
        int val1, val2;

        printf("for multiplication...\n");
        printf("Enter 1 value=");
        scanf("%d", &val1);
        printf("Enter 2 value=");
        scanf("%d", &val2);
        multiplication(val1, val2);
        break;
    }
    }
}
