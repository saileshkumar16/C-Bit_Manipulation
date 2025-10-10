#include <stdio.h>
int main() 
{
    char num = 16;
    
    char count = 0; // to count the no of set bits
    
    char tmp = num;
    
    while(tmp!=0)
    {
        if(tmp&1) // check lsb if 1
         count++; //it is 1 and increment the count
        
        tmp = tmp >> 1; // move to next bit
    }
    
    if(count==1)
    printf("%d is a power of 2",num);
    else
    printf("%d is not a power of 2",num);

    
    return 0;
}
