#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 *@s:input
 */
void print_rev(char *s)
{

int len = 0;
int i, last_index;

	while (s[len] != '\0')
		len++;
	last_index = len - 1;

	for (i = last_index; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
