#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Printing the octal and hexadecimal forms
    printf("Octal: %o\n", num);   // %o is used for octal output
    printf("Hexadecimal: %X\n", num);  // %X is used for hexadecimal output (uppercase letters)

    return 0;
}
