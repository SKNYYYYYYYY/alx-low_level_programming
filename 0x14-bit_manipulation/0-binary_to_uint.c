#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: Pointer to a valid binary string
 * Return: Decimal equialent of the binary string, or 0 if the input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
unsigned int i = 0, k = 0;
if(b == NULL)
    return (0);
for(i = 0; b[i] != '\0'; i++)
{
    if(b[i] != '0' && b[i] != '1')
        return (0);
    k = (k << 1) | (b[i] - '0');
}
=======
	unsigned int decimal = 0;
>>>>>>> 205ed1ea9636b3885bf67eb2d48b58ab3c90f1d5

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = (decimal << 1) | (*b - '0');
	}

	return (decimal);
}
