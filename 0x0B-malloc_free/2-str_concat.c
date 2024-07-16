#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: second string`
 * Return: Pointer to the new memory allocation fails, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, c, len, len2, x, p;

	x = 0;
	p = 0;
	len = 0;
	len2 = 0;
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
	{
		len++;
		x++;
	}
	while (s2[p] != '\0')
	{
		len2++;
		p++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + len2) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	for (c = 0; c < len2; c++)
		ptr[i + c] = s2[c];
	ptr[i + c] = '\0';
	return (ptr);
}
