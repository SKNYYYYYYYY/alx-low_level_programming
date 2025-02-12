#include "search_algos.h"
/**
 * interpolation_search - an algorithm to search for a value in an array
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of the value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, position;

	if (!array)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = (low + ((double)(value - array[low]) /
		(array[high] - array[low])) * (high - low));
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (value == array[position])
			return (position);
		if (value < array[position])
			high = position - 1;
		else
			low = position + 1;
	}
	position = (low + ((double)(value - array[low]) /
	(array[high] - array[low])) * (high - low));
	printf("Value checked array[%ld] is out of range\n", position);
	return (-1);
}
