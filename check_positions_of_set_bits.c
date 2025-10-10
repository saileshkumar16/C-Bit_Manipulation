#include <stdio.h>
int main() 
{
    char num = 10;
    
    char pos = 0; // least possible pos value where it can be 1
    
    while(num!=0)
    {
        if(num&1) // check lsb if 1
        printf("%d ",pos); //immediately print pos
        
        num = num >> 1; // move to next bit
        pos++; //increment pos
    }

    
    return 0;
}
