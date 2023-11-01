#include "main.h"

/**
 * _abs - computes the absolute value of the integer argument j
 * @n : the integer to be computed
 * Return: 1 n is greater or equal zero, -1 if n is less then zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
