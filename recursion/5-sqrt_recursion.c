#include "main.h"
int sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n
 *         if n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
 * sqrt_helper - helper function to calculate the square root
 * @n: the number to calculate the square root of
 * @i: possible square root
 *
 * Return: the natural square root of n
 *         if i*i > n, return -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}
