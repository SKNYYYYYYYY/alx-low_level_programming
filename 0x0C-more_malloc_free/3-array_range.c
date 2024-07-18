#include<stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: Pointer to the newly created array, or NULL if fails
 */
int *array_range(int min, int max)
{
	int *ptr_arr, *ptr,i,r;
	r = 0;
	if(min > max)
	{
		return (NULL);
	}
	ptr=malloc(sizeof(int)*(max-min)+ 1);
	if(ptr==NULL)
		return (NULL);
	ptr_arr = ptr;
	for(i=0;i<=(max-min);i++)
	{
		ptr_arr[i] = ptr[i]+r++;
	}
return (ptr_arr);
}
