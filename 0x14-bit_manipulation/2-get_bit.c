#include "main.h"
/*
*get_bit - function to get the bit of n at index index
* @n: the number to get the bit from
*@index: index of the bit
*Return  - return k & 1; meaning either 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int k;
    if (n < index)
        return (-1);
    k = n >> index;
    return (k & 1);
}