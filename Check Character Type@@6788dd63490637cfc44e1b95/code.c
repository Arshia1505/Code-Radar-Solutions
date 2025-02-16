#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if it is a vowel
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel\n");
    }
    // Check if it is an alphabet (A-Z or a-z) and not a vowel → Consonant
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    // Check if it is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If none of the above, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
