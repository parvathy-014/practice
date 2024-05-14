#include <stdio.h>

// Function to perform half adder operation
void halfAdder(int bit1, int bit2, int *sum, int *carry) {
    // XOR operation gives the sum
    *sum = bit1 ^ bit2;
    
    // AND operation gives the carry
    *carry = bit1 & bit2;
}

int main() {
    int bit1, bit2, sum, carry;
    
    // Input two binary bits (0 or 1)
    printf("Enter the first bit (0 or 1): ");
    scanf("%d", &bit1);
    
    printf("Enter the second bit (0 or 1): ");
    scanf("%d", &bit2);
    
    // Perform half adder operation
    halfAdder(bit1, bit2, &sum, &carry);
    
    // Output the result
    printf("Sum: %d\n", sum);
    printf("Carry: %d\n", carry);
    
    return 0;
}
