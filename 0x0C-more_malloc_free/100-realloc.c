#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr_new, i = 0;

	if (new_size == old_size)
		return (ptr);

	ptr_new = malloc(sizeof(int) * (new_size - old_size) + old_size);

	if (ptr == NULL)
		malloc(new_size);

	if (new_size < old_size)
		ptr_new[i] = 62;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
