#include "search_algos.h"
/**
 * jump_search - divide and conquer algorithm to search for a value in an array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t current = 0, jumper = sqrt(size), i, new;

	if (!array)
		return (-1);
	while (current < size)
	{
		if (value == array[current])
			return (current);

		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		if (value <= (array[current + jumper]))
		{
			new = current + jumper;
			printf("Value found between indexes [%d] and [%d]\n", current, new);

			for (i = current; i <= (current + jumper); i++)
			{
				if (i < size)
					printf("Value checked array[%d] = [%d]\n", i, array[i]);
				else
					return (-1);
				if (value == array[i])
					return (i);
			}
			return (current);
		}
	current += jumper;
	}
	return (-1);
}
