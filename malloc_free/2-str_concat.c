#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	s = malloc((len1 + len2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(s, s1);
	if (s2 != NULL)
		strcpy(s + len1, s2);

	return (s);
}
