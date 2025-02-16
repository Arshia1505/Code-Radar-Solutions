#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int p = 0; // Start at 0-based index
    while ((num & 1) == 0) { // Check LSB first
        num >>= 1;  // Right shift
        p++; // Move to the next position
    }
        printf("%d\n", p);
    
    return 0;
}
