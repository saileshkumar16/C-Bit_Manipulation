#include <stdio.h>

int main() 
{
    unsigned int num = 0b11011100;  // 220
    int l = 2, r = 5;
    
    unsigned int mask = (1U <<  (r-l+1)) -1;
    unsigned int extracted = (num >> l) & mask;
    
    printf("%d",extracted);
    return 0;
}
