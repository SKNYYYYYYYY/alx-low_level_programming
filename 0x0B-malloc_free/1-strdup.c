#include "main.h"
#include<stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(str) + 1);
	if (ptr == NULL)
		return (NULL);

	ptr = str;

	return (ptr);
}

