#include "main.h"
/**
 * get_endianness - check for the endianess of your pc
 * Return: 1 if lil endian and 0 if big
 */
int get_endianness(void)
{
	unsigned int k = 1;

	char *c = (char *)&k;

	if (*c)
		return (1);
	return (0);
}
