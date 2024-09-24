#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}