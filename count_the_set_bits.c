#include <stdio.h>
int main() 
{
    char num = 10;
    
    char count = 0; // to count the no of set bits
    
    while(num!=0)
    {
        if(num&1) // check lsb if 1
         count++; //it is 1 and increment the count
        
        num = num >> 1; // move to next bit
    }
    
    printf("%d",count);

    
    return 0;
}
