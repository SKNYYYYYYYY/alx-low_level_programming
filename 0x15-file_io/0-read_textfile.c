#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads and writes the contents of a file to stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to write.
 *
 * Return: The number of printed characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t number_of_chars = 0;
	int character;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((character = fgetc(fp)) != EOF && number_of_chars < (ssize_t)letters)
	{
		fputc(character, stdout);
		number_of_chars++;
	}
	fclose(fp);
	return (number_of_chars);
}
