#include "main.h"
#include<stdlib.h>
/**
		
 * _strdup - duplicate to new memory space location
		
 * @str: char
		
 * Return: 0
 */
#include <stdlib.h>

char *_strdup(char *str)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(str));
	if (ptr == NULL) {
		return NULL;
	}

	ptr = str;
	return ptr;
}
	
