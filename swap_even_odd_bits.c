#include <stdio.h>

int main()
{
int num = 22;

int even_mask = num & 0x55;  // mask even bits
int odd_mask  = num & 0xAA;  // mask odd bits

int res = (even_mask << 1) | (odd_mask >> 1);

printf("%d", res);


    return 0;
}
