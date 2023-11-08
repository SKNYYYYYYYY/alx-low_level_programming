#include "function_pointers.h"

/**
 * print_name - prints out a name
 * @name: pointer to the name
 * @f: function pointer
 *
 * Return: no return value
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
