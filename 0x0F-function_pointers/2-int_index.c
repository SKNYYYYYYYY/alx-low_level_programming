#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: the array passed to the function
 * @size: the size of the array passed to this function
 * @cmp: pointer to a function
 *
 * Return: integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x = -1;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				x = i;
				break;
			}
			else
			{
				continue;
			}
		}
	}
	return (x);
}
