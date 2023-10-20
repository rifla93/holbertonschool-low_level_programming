#include "main.h"
/**
 * print_most_numbers - prints the numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	int number;

		for (number = 0; number < 10; number++)
	{
		if (number != 2 && number != 4)
	{
		_putchar(number + '0');
	}
	}

		_putchar('\n');

}
