#include<stdio.h>
/**
 * print_name - function that prints a name
 * @name: pointer to persons name
 * @f: pointer to a function that takes char  pointer as a parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
