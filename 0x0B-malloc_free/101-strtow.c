#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: Pointer to an array of strings (words), or NULL if failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, word_count = 0; str[i]; i++)
	{
		while (isspace((unsigned char)str[i]))
			i++;
		if (str[i] == '\0')
			break;

		for (j = i; !isspace((unsigned char)str[j]) && str[j]; j++)
			;

		words[word_count] = malloc((j - i + 1) * sizeof(char));
		if (words[word_count] == NULL)
		{
			for (k = 0; k < word_count; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; i < j; i++, k++)
			words[word_count][k] = str[i];
		words[word_count][k] = '\0';
		word_count++;
		i--;
	}

	words[word_count] = NULL;
	return (words);
}
