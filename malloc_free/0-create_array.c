#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *@size: size of the aray
 *@c: the character to initialize the array
 *Return: NULL if size is 0, otherwise return porinter
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
