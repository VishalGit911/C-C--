

/*THIS IS MY PROGRAM TO CHECK EVEN NUMBER OR ODD NUMBER*/

#include <stdio.h>

int main()

{
    int a;

    printf("Give me one Random number:");
    scanf("%d", &a);

    a % 2 == 0 ? printf("Even\n") : printf("Odd\n");
}
