/**
 * mul - Multiplies two integers.
 * @x: The first integer.
 * @y: The second integer.
 *
 * Return: The product of x and y.
 */
int mul(int x, int y)
{
	int result = 0;

	result = x * y;
	return (result);
}

/**
 * add - Adds two integers.
 * @x: The first integer.
 * @y: The second integer.
 *
 * Return: The sum of x and y.
 */
int add(int x, int y)
{
	int result = 0;

	result = x + y;
	return (result);
}

/**
 * sub - Subtracts one integer from another.
 * @x: The first integer (minuend).
 * @y: The second integer (subtrahend).
 *
 * Return: The difference between x and y.
 */
int sub(int x, int y)
{
	int result = 0;

	result = x - y;
	return (result);
}

/**
 * div - Divides one integer by another.
 * @x: The dividend.
 * @y: The divisor.
 *
 * Return: The quotient of x divided by y.
 */
int div(int x, int y)
{
	int result = 0;

	result = x / y;
	return (result);
}

/**
 * mod - Finds the remainder of division between two integers.
 * @x: The dividend.
 * @y: The divisor.
 *
 * Return: The remainder of x divided by y.
 */
int mod(int x, int y)
{
	int result = 0;

	result = x % y;
	return (result);
}
