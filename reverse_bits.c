#include <stdio.h>

int main() 
{
    unsigned char a = 13;  // input number
    unsigned char rev = 0; // store reversed bits
    
    for (int i = 0; i < 8; i++) // process all 8 bits
    {
        rev = rev << 1;          // shift left to make space
        if (a & 1)               // if LSB of a is 1
            rev = rev ^ 1;       // set rightmost bit of rev
        
        a = a >> 1;              // move to next bit of a
    }
    
    printf("%d\n", rev);        
    return 0;
}

---------------------------------------------------------------------

    easy method


#include <stdio.h>
#include <stdint.h>

int main()
{
     uint8_t x = 0b10110010;   // example input
     
     printf("Input  : 0x%02X\n", x);

     // Step 1: Swap 1-bit groups
     x = ((x & 0x55) << 1) | ((x & 0xAA) >> 1);

     // Step 2: Swap 2-bit groups
     x = ((x & 0x33) << 2) | ((x & 0xCC) >> 2);

     // Step 3: Swap 4-bit groups
     x = (x << 4) | (x >> 4);

     printf("Output : 0x%02X\n", x);  // print result in hex

     return 0;
}

