#include <stdio.h>
#include <stdint.h>
int main() 
{
    int num = 12; // binary: 1100
    int pos = 0; 
    
    while(num != 0)
    {
        if(num & 1)
        {
            printf("%d ", pos);
            break;
        }
        
        pos++;
        num = num >> 1;
    }
    
    return 0;
}
