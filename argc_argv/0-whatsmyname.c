#include <stdio.h>
/**
 * main - the main function
 *@argc: the number of arguments passed to the program
 *@argv: an array of pointers to the arguments,strings
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
