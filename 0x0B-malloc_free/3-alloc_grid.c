#include <stdlib.h>

/**
 * alloc_grid - allocate memory to a 2-D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2-D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j, t, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		ptr[j] = (int *)malloc(width * sizeof(int));
		if (ptr[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (k = 0; k < width; k++)
			ptr[t][k] = 0;
	}

	return (ptr);
}
