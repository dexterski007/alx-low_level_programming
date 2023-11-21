#include "lists.h"

/**
 * free_listint_safe - print list safe
 *
 * @h: node pointer
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listint_t *curr;
	int major;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		major = *h - (*h)->next;
		if (major > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			s++;
		}
		else
		{
			free(*h);
			*h = NULL;
			s++;
			break;
		}
	}
	*h = NULL;
	return (s);
}
