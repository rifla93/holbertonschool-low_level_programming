#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
