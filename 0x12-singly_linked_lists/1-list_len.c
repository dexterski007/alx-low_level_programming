#include "lists.h"

/**
 * list_len - list length
 *
 * @h: node example
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
