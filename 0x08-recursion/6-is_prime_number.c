#include "main.h"
/**
  * primesearch - searches if a number is prime
  *
  * @a: the number to check
  * @b: the numbers we"ll have to go through
  * Return: whether or not a number is a prime
  */
int primesearch(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
	{
		primesearch(a, b + 1);
	}
	return (1);
}
/**
  * is_prime_number - tells us if an integer is a prime number or not
  * @n: the number to check
  * Return: 0 if the number is not prime and if it is
  */
int is_prime_number(int n)
{
	return (primesearch(n, 2));
}
