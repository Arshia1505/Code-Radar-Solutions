// Your code here...
#include <stdio.h>

int main() {
    int i, j, n;
    char ch;
    scanf("%d", &n);

    // Generating the alphabet right triangle
    for (i = 1; i <= n; i++) {
        ch = 'A'; // Reset to 'A' for each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Increment character
        }
        printf("\n");
    }

    return 0;
}
