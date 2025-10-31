#include <stdio.h>

int main() 
{
    unsigned int x = 0b10100100;   // example number (0xA4)
    unsigned int l = 2;            // start bit
    unsigned int r = 5;            // end bit
    
    // Step 1: Create a mask with 1s from bit l to bit r
    unsigned int mask = ((1U << (r - l + 1)) - 1) << l;

    // Step 2: Perform operations
    unsigned int set_bits     = x | mask;    // Set bits in range
    unsigned int clear_bits   = x & ~mask;   // Clear bits in range
    unsigned int toggle_bits  = x ^ mask;    // Toggle bits in range

    // Step 3: Print results
    printf("Original  : 0x%X\n", x);
    printf("Mask      : 0x%X\n", mask);
    printf("Set bits  : 0x%X\n", set_bits);
    printf("Clear bits: 0x%X\n", clear_bits);
    printf("Toggle    : 0x%X\n", toggle_bits);

    return 0;
}
