#include <stdio.h>

int main()
{
    unsigned int x = 40; // Example: 0b101000
    int pos = 1;
    int found = 0;

    while (x!=0)
    {
        if (x & 1)
        {
            found = 1;
            break; // Exit the loop when first set bit is found
        }
        x = x >> 1;
        pos++;
    }

    if (found)
        printf("First set bit is at position: %d\n", pos);
    else
        printf("No set bit found (x = 0)\n");

    return 0;
}
