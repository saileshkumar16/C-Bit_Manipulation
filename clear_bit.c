#include <stdio.h>
int main() 
{
    char num = 10;
    
    char pos = 1;
    
    num = num & ~(1<<pos);
    
    printf("%d",num);
    
    return 0;
}
