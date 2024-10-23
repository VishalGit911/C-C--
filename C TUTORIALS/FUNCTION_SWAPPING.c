#include <stdio.h>
int swaptwovalue(int a, int b)
{

    int temp;

    temp = a;
    a = b;
    b = temp;
    printf("After swapping: A = %d\n", a);
    printf("After swapping: B = %d\n", b);
}

int swapthreevalue(int a, int b, int c)
{
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swapping: A = %d\n", a);
    printf("After swapping: B = %d\n", b);
    printf("After swapping: C = %d\n", c);
}
int swapfourvalue(int a, int b, int c, int d)
{
    int temp;

    temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;

    printf("After swapping: A = %d\n", a);
    printf("After swapping: B = %d\n", b);
    printf("After swapping: C = %d\n", c);
    printf("After swapping: D = %d\n", d);
}
int main()
{
    int choose;
    printf("Press 1 for swapping between 2 value \n");
    printf("Press 2 for swapping between 3 value \n");
    printf("Press 3 for swapping between 4 value \n");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
    {
        printf("You select swapping between 2 value\n");
        int value1, value2;
        printf("Enter the value of A =");
        scanf("%d", &value1);
        printf("Enter the value of B =");
        scanf("%d", &value2);
        printf("Before swap a=%d\n", value1);
        printf("Before swap b=%d\n", value2);

        swaptwovalue(value1, value2);
    }
    break;
    case 2:
    {
        printf("You select swapping between 2 value\n");
        int value1, value2, value3;
        printf("Enter the value of A =");
        scanf("%d", &value1);
        printf("Enter the value of B =");
        scanf("%d", &value2);
        printf("Enter the value of C =");
        scanf("%d", &value3);
        printf("Before swap A=%d\n", value1);
        printf("Before swap B=%d\n", value2);
        printf("Before swap C=%d\n", value3);

        swapthreevalue(value1, value2, value3);
    }
    break;
    case 3:
    {
        printf("You select swapping between 2 value\n");
        int value1, value2, value3, value4;
        printf("Enter the value of A =");
        scanf("%d", &value1);
        printf("Enter the value of B =");
        scanf("%d", &value2);
        printf("Enter the value of C =");
        scanf("%d", &value3);
        printf("Enter the value of D =");
        scanf("%d", &value4);
        printf("Before swap A=%d\n", value1);
        printf("Before swap B=%d\n", value2);
        printf("Before swap C=%d\n", value3);
        printf("Before swap D=%d\n", value4);

        swapfourvalue(value1, value2, value3, value4);
    }
    break;
    }
}
