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
size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
