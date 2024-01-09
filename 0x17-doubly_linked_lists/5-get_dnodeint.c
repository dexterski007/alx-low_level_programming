#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head
 * @index: inex
 *
 * Return: node number x
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (head == NULL)
		return (NULL);
	else
		return (head);
}
