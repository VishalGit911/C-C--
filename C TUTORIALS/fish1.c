#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter size of the fish (odd number): ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number for a symmetric fish pattern.\n");
        return 0;
    }

    int mid = size / 2 + 1;

    // Upper part of the fish
    for (i = 1; i <= mid; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the fish
    for (i = mid - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
