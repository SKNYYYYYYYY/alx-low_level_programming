#include "main.h"
#include <stdio.h>
/**
  * main - runs code
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i <= argc; i++)
	{}
	printf("%d\n", i - 2);
	return (0);
}
