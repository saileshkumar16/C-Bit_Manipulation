#include <stdio.h>
int main() 
{
    char num = 10;
    
    char pos = 1;
    
    if(num & (1<<pos)) //bit masking for checking particular postion and ANDing with number 
    printf("%d position is set",pos);
    else
    printf("%d position is not set",pos);
    
    return 0;
}
