#include "main.h"

/**
 *  * print_alphabet_x10 - prints out the alphabet ten times
 *   *
 *    * Return: On success 0
 *     * On error, -1 is returned, and errno is set appropriately.
     */

void print_alphabet_x10(void)
{
char c;
int i;
i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; ++c)
_putchar(c);
_putchar('\n');
i++;
}
}
