#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - checks my code
  * @argc: argument count
  * @argv: argument vector
  * Return: always 0 (success)
  */
int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;
	printf("%i\n", mult);
	return (0);
}
