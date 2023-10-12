#include "main.h"
/**
 *  *  * times_table - a function that prints the times table of 9
 *   *   * @void: the function receives no arguments
 *    *    *
 *     *     * Return: no return value
  */
void times_table(void)
{
int i, a, x;

for (i = 0; i < 10; i++)
{
for (a = 0; a < 10; a++)
{
x = a * i;
if (a == 0)
{
if (i == 0)
{
_putchar(x + '0');
}
else
{
_putchar('\n');
_putchar(x + '0');
}
}
else if (x >= 10)
{
_putchar(' ');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}
if (a != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
