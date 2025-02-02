#include "search_algos.h"
/**
 * linear_search - a search algorithm to search for a given value in the array
 * @array: the array to search
 * @size: the number of elements to in the array
 * @value: the value to search
 * Return: the index of the target value
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
