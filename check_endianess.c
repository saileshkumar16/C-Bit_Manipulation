#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 1;        // 0x00000001
    unsigned char *ptr = (unsigned char *)&num;

    if (*ptr == 1)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");

    return 0;
}
