#include "main.h"
#include<stdlib.h>
/**
		
 * _strdup - duplicate to new memory space location
		
 * @str: char
		
 * Return: 0
		
 */
char *_strdup(char *str){
	char *ptstr;
		
	int strLen = 0;		
	if (*ptstr==NULL)
		return (NULL);

	while (str[strLen] != '\0')

		strLen++;

	ptstr = malloc(strLen*sizeof(char)  + 1);

	if (ptstr == NULL)

		return (NULL);

	for(int count = 0; str[count] != '\0'; count++)

	ptstr[count] = str[count];
		
	return (ptstr);
		
}
