#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main -  the main function of the operations
 * @argc: numbers of arguments passed
 * @argv: arguments passed to the function
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", func(a, b));
	return (0);
}
