#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node list
 *
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
