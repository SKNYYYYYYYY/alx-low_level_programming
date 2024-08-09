#include "main.h"

/**
 * set_bit - Sets the bit at a specific index in an unsigned long integer.
 *
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return (-1);

    *n =  *n | (1 << index);
    return (1);
}