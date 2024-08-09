#include "main.h"
/**
*get_bit - function to get the bit of n at index index
* @n: the number to get the bit from
*@index: index of the bit
* Return:  - return k & 1; meaning either 0 or 1
*/
int get_bit(unsigned long int n, unsigned int index)
{
<<<<<<< HEAD
    unsigned long int k;
    if (n < index || index >= (sizeof(unsigned long int) * 8))
        return (-1);
=======
	unsigned long int k;
>>>>>>> 68e299af376038fb5ec86bb85b5f2f9ffa78fc99

	if (n < index || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	k = n >> index;
	return (k & 1);
}
