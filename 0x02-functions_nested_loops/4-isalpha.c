#include "main.h"
/**
 *  * capital - checks for uppercase alphabet charecters
 *   * @d: The character passed to the function on calling
 *    *
 *     * Return: 0 on success
 *      * On error, -1 is returned, and errno is set appropriately.
  */
int capital(char d)
{
	int x;
	char w;

	for (w = 'A' ; w <= 'Z'; ++w)
	{
		if (d == w)
		{
			x = 1;
			break;
		}
		else if (w == 'Z')
		{
			x = 0;
			break;
		}
	}
	return (x);
}

/**
 *  * _isalpha - checks for alphabet charecters
 *   * @c: The character to passed
 *    *
 *     * Return: On success 0.
 *      * On error, -1 is returned, and errno is set appropriately.
  */
int _isalpha(int c)
{
	char y = c;
	char q;
	int x;

	for (q = 'a'; q <= 'z'; q++)
	{
		if (q == y)
		{
			x = 1;
			break;
		}
		else if (q == 'z')
		{
			x = capital(y);
			break;
		}
	}
	return (x);
}
