#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char o;

	for (i = 'a'; i <= 'z'; i++)
	for (o = 'A'; o <= 'Z'; o++)
		putchar(i);
		putchar(o);
	putchar('\n');
	return (0);
}
