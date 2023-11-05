#include "main.h"
#include<stdlib.h>
/**
*malloc_checked - allocates memory using malloc
 * @b: size of int needed in the memory heap
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *malloc_checked;

	malloc_checked = malloc(b);
		if (malloc_checked == NULL)
			exit(98);
		return (malloc_checked);
}
