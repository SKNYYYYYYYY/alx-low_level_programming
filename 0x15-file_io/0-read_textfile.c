#include "main.h"
/**
*read_textfile - file to read and write contents of a file
*@filename: file name
*@letters: number of letters to write
*Return: return number of printed chars
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t  number_of_chars = 0;
	int character;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while ((character = fgetc(fp)) != EOF)
	{
	if (number_of_chars <= (ssize_t)letters)
	{
		_putchar(character);
		number_of_chars++;

	}
	}
	fclose(fp);
return (number_of_chars);
}
