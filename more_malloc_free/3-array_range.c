#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer of the array
 * @max: last integer of the array
 *
 * Return: pointer to the newly created array, or NULL if failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
