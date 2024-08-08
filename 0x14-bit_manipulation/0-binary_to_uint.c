#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: Pointer to a valid binary string
 * Return: Decimal equialent of the binary string, or 0 if the input is invalid
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

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
