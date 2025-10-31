#include <stdio.h>

int main()
{
    unsigned char x = 0xAB; 
    
    unsigned char swap = ((x & 0x0F) << 4) | ((x & 0xF0) >> 4);
    
    printf("0x%X\n",x);
    printf("0x%X", swap);

    return 0;
}
