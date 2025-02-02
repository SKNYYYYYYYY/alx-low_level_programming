#include "search_algos.h"
/**
 * binary_search - divide and conquer algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int mid, i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
				printf("%d", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;
		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);

	}
	return (-1);
}
