#include "main.h"
/**
 * factorial- function calculates the factorial number using recursion
 *@n: the given number
* Return: n* (n-1) if its more than zero
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
