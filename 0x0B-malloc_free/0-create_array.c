#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the number of elements passed
 * @c: thre char passed to the function
 *
 * Return: a pointer s to thecreated array
 */
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return ("NULL");

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
		return ("NULL");

	for (i = 0; i < size; i++)
		arr[i] = c;
	free(arr);
	return (arr);
}
