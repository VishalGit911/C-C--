#include <stdio.h>
int main()
{
    int A;
    int table = 1;
    printf("Enter the value of A =");
    scanf("%d", &A);
    do
    {
        printf("%d * %d = %d\n", A, table, table * A);
        table++;
    } while (table <= 10);
}