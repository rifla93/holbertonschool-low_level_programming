#include "main.h"

/**
 * times_table - prints the 9 times table,starting with 0
 * Return: value of the last digit
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			
			if (j == 0) 
			{
				if (i == 0) 
			{
				_putchar(' ');
				_putchar(',');
				_putchar(' '); 
			}
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			else
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
