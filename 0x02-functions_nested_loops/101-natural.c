#include <stdio.h>
/**
 *main - entry point
* finds the sum of multiples of 3 or 5 below 1024
 * return - return 0 for success
 * no return value
 */
int main(void)
{
	int sum;
	int a;

	for (a = 3; a < 1024; ++a)
	{
		int b, c;

		b = a % 3;
		c = a % 5;
		if (b == 0)

		{
			sum = sum + a;
		}
		else
		{
			if (c == 0)
				sum = sum + a;
		}
	}
	printf("%d \n", sum);
	return (0);
}
