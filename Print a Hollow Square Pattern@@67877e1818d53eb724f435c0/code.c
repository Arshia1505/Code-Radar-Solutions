// Your code here...
#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print '*' for the first row, last row, first column, or last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf("  "); // Print spaces inside the square
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
