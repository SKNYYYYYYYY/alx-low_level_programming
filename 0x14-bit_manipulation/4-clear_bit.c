#include "main.h"
/**
*clear_bit - function to flip a 1 bit at a certain index
*@n: pointer to the memory location
*Return: return 1 in success and -1 in fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    if(index >= sizeof(unsigned long int) * 8)
        return (-1);
    if (*n & (1 << index))
        *n = *n ^ (1 << index);
    return (1);
}