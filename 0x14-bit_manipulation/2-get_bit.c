#include "main.h"
/**
*get_bit - function to get the bit of n at index index
* @n: the number to get the bit from
*@index: index of the bit
* Return:  - return k & 1; meaning either 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k, i;

	if (n < index || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	k = n >> index;
	i = k & 1;
	return (i);
}
