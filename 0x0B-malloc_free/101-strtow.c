#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL if failure.
 */
char **strtow(char *str)
{
	int i, j, k, len, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_count = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			/* Beginning of a word */
			j = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			/* Allocate memory for this word */
			words[word_count] = malloc((i - j + 1) * sizeof(char));
			if (words[word_count] == NULL)
			{
				/* Free previously allocated memory */
				for (k = 0; k < word_count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			/* Copy the word into words[word_count] */
			for (k = 0; j < i; j++, k++)
				words[word_count][k] = str[j];
			words[word_count][k] = '\0';
			word_count++;
		}
	}
	/* Terminate the array with NULL */
	words[word_count] = NULL;
	return (words);
}

