#include "main.h"
/**
 * _isdigit- takes an integer as an argument
 * @c:character to be valuated
 * Return:1 if c is a digit,otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
