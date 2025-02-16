#include <stdio.h>

int main() {
    int a, b;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);

    // Switch case for operations
    switch (ch) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0)  // Prevent division by zero
                printf("Error! Division by zero is not allowed.\n");
            else
                printf("%d\n", a / b);
            break;
        default:
            printf("Invalid operator! Use +, -, *, or /.\n");
    }

    return 0;
}
