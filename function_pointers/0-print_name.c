#include <stdio.h>
/**
 * print_name - a function that prints a name.
 * @name: The name to be printed.
 * @f: A pointer to the function to be used to print the name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
