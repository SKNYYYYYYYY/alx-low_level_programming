#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 return	 Otherwise return the sum of all parameters.
 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int i;
		int sum = 0;


		va_start(ap, n);
		if (n == 0)
		{
			return (0);

		}
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
