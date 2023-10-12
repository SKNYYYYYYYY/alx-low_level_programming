#include "main.h"
/**
 *  * greater_than_98 - does the enumeration for numbers greater than 98
 *   * @n: the integer passed to the function
 *    *
 *     * Return: there is no return value
  */
void greater_than_98(int n)
{
for (; n > 97; n--)
{
if (n < 100)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
/**
 *  * print_to_98 - prints all numbers from n to 98
 *   * @n: the integer value passed to the function
 *    *
 *     * Return: there is no return value
 */
void print_to_98(int n)
{
	int a;

if (n < 99)
{
for (; n < 99; n++)
{
a = n;
if (n < 0)
{
_putchar('-');
a = -a;
}
if (a < 10)
{
_putchar(a + '0');
}
else if (a < 100)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
else
{
_putchar((a / 100) + '0');
_putchar(((a / 10) % 10) + '0');
_putchar((a % 10) + '0');
}
if (n != 98)
}
_putchar(',');
_putchar(' ');
}
}
}
else
{
greater_than_98(n);
}
_putchar('\n');
}
