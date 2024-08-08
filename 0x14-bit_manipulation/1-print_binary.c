#include "main.h"
/**
 * print_binary - function to convert decimal to binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	unsigned long int k, temp = n;
	int i, len = 0;

	while (temp > 0)
	{
		len++;
		temp >>= 1;
	}

	if (n == 0)
		_putchar('0');

	for (i = len - 1; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
