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
