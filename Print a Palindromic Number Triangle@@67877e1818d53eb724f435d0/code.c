// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces for center alignment
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Printing decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");  // Move to the next row
    }

    return 0;
}
