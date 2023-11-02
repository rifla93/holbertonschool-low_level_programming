#include <stdio.h>
/**
 * main-entry point
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments,strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
