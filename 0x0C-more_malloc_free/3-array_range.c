#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: Pointer to the newly created array, or NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr_arr, i;


	if (min > max)
	{
		return (NULL);
	}
	ptr_arr = malloc(sizeof(int) * (max - min + 1));
	if (ptr_arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ptr_arr[i] = min;
	}
	return (ptr_arr);
}
