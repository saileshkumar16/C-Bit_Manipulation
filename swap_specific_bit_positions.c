#include <stdio.h>

int main()
{
    unsigned char num = 22;   // example
    int i = 2;              // bit position 2
    int j = 5;
    
    
    int ith = (num >> i) & 1;
    int jth = (num >> j) & 1;
    
    if(ith==jth)
    printf("No swapping req, since both are same");
    else
    num = num ^ ((1<<i) | (1<<j));
    
    printf("%d",num);

}    
    
