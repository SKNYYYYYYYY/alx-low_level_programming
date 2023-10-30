#include "main.h"
/**
 *  * _abs - calculate absolute value
 *   * @i: The character to passed
 *    *
 *     * Return: On success x.
 *      * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int i)
{
	int x
		;
	if (i > 0)
	{
		x = i;
	}
	else if (i == 0)
	{
		x = i;
	}
	else
	{
		x = 0 - i;
	}
	return (x);
}
