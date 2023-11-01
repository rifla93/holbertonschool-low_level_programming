#include "main.h"
#include <stdio.h>
/**
 * _strlen - calculate the length of a string
 * @s:input
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
{
		len++;
		s++;
}
	return (len);
}


