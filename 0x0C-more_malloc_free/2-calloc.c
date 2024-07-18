#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *ptr2;
	unsigned int i, total_bytes;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_bytes = nmemb * size;

	ptr = malloc(total_bytes);
	if (ptr == NULL)
		return (NULL);

	ptr2 = ptr;
	for (i = 0; i < total_bytes; i++)
		ptr2[i] = 0;

	return (ptr);
}
