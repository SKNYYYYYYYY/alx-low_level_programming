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
	int len = 0;
	int i = 0;
	int c;
	 if (str == NULL)
        return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (c = 0; c <= len; c++)
	{
		ptr[c] = str[c];
	}

	return (ptr);
}

