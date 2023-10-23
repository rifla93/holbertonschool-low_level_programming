#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len, n, i;

	len = strlen(str);
	n = len / 2;

	if (len % 2 != 0)
	{
		n++;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
