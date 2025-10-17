#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    
    int diff = a - b; // compute the diff
    
    int sign = diff >> 31; // take the MSB and put it in LSB and check sign
    
    int max = a - (diff & sign);
    
    printf("%d",max);
    
    
}
