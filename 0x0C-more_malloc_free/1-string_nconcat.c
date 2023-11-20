#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of characters to be picked from string 2
 *
 * Return: the pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, l = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0')
		l++;

	if (l > n)
		i = i + n + 1;
	else
		i = i + l + 1;

	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);

	while (k < i && s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}

	while (k < i && j < n && s2[j] != '\0')
	{
		s[k] = s2[j];
		k++;
		j++;
	}

	s[k] = '\0';
	return (s);
}
