#include<stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name hhhhj h hhhh hhh  hhhh 
 * @name: pointer to persons name uuiii iiiui iiuii 
 * @f: pointer to a function that takes char  pointer as a parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
