#include "main.h"
int get_endianness(void)
{
	unsigned int k = 1;

	char *c = (char *)&k;
	if(*c)
		return (1);
	else
	{
		return (0);
	}
}
