#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0x12345678;

    printf("Original: 0x%x\n", num);

    // Step 1: Extract bytes
    uint32_t b0 = (num & 0x000000FF);
    uint32_t b1 = (num & 0x0000FF00) >> 8;
    uint32_t b2 = (num & 0x00FF0000) >> 16;
    uint32_t b3 = (num & 0xFF000000) >> 24;

    // Step 2: Swap nibbles in each byte
    b0 = ((b0 & 0xF0) >> 4) | ((b0 & 0x0F) << 4);
    b1 = ((b1 & 0xF0) >> 4) | ((b1 & 0x0F) << 4);
    b2 = ((b2 & 0xF0) >> 4) | ((b2 & 0x0F) << 4);
    b3 = ((b3 & 0xF0) >> 4) | ((b3 & 0x0F) << 4);

    // Step 3: Combine back into a 32-bit number
    uint32_t result = (b3 << 24) | (b2 << 16) | (b1 << 8) | b0;

    printf("Converted: 0x%x\n", result);

    return 0;
}
