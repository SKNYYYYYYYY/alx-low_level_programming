#include "main.h"
/**
* flip_bits - function to count the number of bits needed to change m to n or m to n
*@n: number to be checked
*@m: number to be checked
*Return: number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int k, i = 0;

        k = n ^ m;
    while(k)
    {
        
            i++;
        k >>= 1;
    }
    return (i);
}