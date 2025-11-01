#include <stdio.h>
#include <stdint.h>

uint32_t little_to_big(uint32_t num)
{
    // Swap bytes using bitwise operations
    uint32_t byte0 = (num & 0x000000FF) << 24; // move byte 0 to byte 3
    uint32_t byte1 = (num & 0x0000FF00) << 8;  // move byte 1 to byte 2
    uint32_t byte2 = (num & 0x00FF0000) >> 8;  // move byte 2 to byte 1
    uint32_t byte3 = (num & 0xFF000000) >> 24; // move byte 3 to byte 0

    return (byte0 | byte1 | byte2 | byte3);
}

int main()
{
    uint32_t num = 0x11223344;

    printf("Original (Little Endian): 0x%x\n", num);

    uint32_t converted = little_to_big(num);

    printf("Converted (Big Endian): 0x%x\n", converted);

    return 0;
}
----------------------------------------------------------------------

#include <stdio.h>
#include <stdint.h>

void endian_swap(uint32_t *num)
{
    unsigned char *ptr = (unsigned char *)num;  // pointer to each byte
    unsigned char temp;

    // swap byte 0 ↔ byte 3
    temp = ptr[0];
    ptr[0] = ptr[3];
    ptr[3] = temp;

    // swap byte 1 ↔ byte 2
    temp = ptr[1];
    ptr[1] = ptr[2];
    ptr[2] = temp;
}

int main()
{
    uint32_t num = 0x11223344;

    printf("Before swap: 0x%x\n", num);

    endian_swap(&num);  // perform byte swap

    printf("After swap : 0x%x\n", num);

    return 0;
}
