#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments,strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
