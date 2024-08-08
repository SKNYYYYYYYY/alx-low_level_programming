#include "main.h"
/*
* binary_to_unint - function to cconvert binary to decimal
*@b: pointer to a valid binary string
*@return: decimal equivalent of the binary string
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0, k = 0;
    if(b == NULL)
        return (0);
    for(i = 0; b[i] != '\0'; i++)
    {
        if(b[i] != '0' && b[i] != '1')
            return (0);
        k = (k << 1) | (b[i] - '0');
    }

    return (k);
}