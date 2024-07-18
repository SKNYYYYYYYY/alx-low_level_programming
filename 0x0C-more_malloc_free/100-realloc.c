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
	void *ptr_new, *ptr_old;
	unsigned long int i, r;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);

	if (ptr == NULL)
		return (ptr_new);

	ptr_old = ptr;
	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size && i < new_size; i++)
		ptr_new[i] = ptr_old[i];


	free(ptr_old);
	return (ptr_new);
}
