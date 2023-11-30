#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the address of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

