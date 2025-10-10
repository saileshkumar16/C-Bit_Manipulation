#include <stdio.h>
int main() 
{
    char num = 7;
    
    if(num&1)
    printf("LSB is 1");
    else
    printf("LSB is 0");
    
    return 0;
}
