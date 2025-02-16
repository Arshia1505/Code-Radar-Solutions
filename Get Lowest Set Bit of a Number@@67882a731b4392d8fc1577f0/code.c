// Your code here...
#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0)
        return -1; // No set bit in zero

    int position = 1; // Position starts from 1 (not 0-based)
    
    while ((num & 1) == 0) { // Check LSB first
        num >>= 1;  // Right shift
        position++; // Move to the next position
    }

    return position;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int position = findLowestSetBitPosition(num);
    
    if (position == -1)
        printf("No set bit found (input was zero).\n");
    else
        printf("Lowest set bit is at position: %d\n", position);
    
    return 0;
}
