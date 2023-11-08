#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds up integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: integer value of the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 *
 * @a: first int
 * @b: second int
 *
 * Return: result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplis two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - does a modulus
 *
 * @a: first int
 * @b: second int
 *
 * Return: the remeinder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
