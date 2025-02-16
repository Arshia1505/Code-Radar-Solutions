// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    char ch;
    scanf("%d %d %*c%c", &a, &b, &ch);  // %*c to consume newline

    // Switch case for operations
    switch (ch) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error! Division by zero is not allowed.");
            else
                printf("%d", a / b);
            break;
        default:
            printf("Invalid operator! Use +, -, *, or /.");
    }

    return 0;
}
