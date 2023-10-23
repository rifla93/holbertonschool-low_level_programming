#include "main.h"
/**
 * _puts - put a string on standard output
 * @str: string
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
