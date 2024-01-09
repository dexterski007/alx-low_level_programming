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

	if (*h == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (i < idx - 1 && h != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = temp;
	new_node->next = temp->next;

	if (new_node->next == NULL)
		new_node->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
