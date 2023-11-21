#include "main.h"
/**
  * _sqrt_recursion - returns the natural squareroot of a number
  * @n: the number
  * Return: squareroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 2));
}
/**
  * _sqrt_helper - returns the nutural square root of a number
  * @n: the number to find squareroot
  * @i: the number to test for the squareroot of @n
  * Return: the square root of @n
  */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
