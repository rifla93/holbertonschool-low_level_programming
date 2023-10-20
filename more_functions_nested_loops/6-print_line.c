#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the character to check
 * Return: if n is 0 or 0 , print \n
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
