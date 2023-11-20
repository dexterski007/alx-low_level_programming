#include "lists.h"

/**
 * print_listint - print all elements
 *
 * @h: node
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
