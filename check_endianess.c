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
--------------------------------------------------------
#include <stdio.h>
int main()
{
    int num = 0x12345678;
    
    char *ptr = (char *)&num;
    
    if(*ptr==0x78)
    printf("Little endian architecture");
    else
    printf("Big endian architecture");

    return 0;
}
