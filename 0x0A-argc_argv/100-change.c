#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins for change
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int coin = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coin += cents / 25;
	cents %= 25;
	coin += cents / 10;
	cents %= 10;
	coin += cents / 5;
	cents %= 5;
	coin += cents / 2;
	cents %= 2;
	coin += cents / 1;

	printf("%d\n", coin);
	return (0);
}
