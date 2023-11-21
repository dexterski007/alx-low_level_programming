#include "lists.h"

/**
 * insert_nodeint_at_index - sum node at index
 *
 * @head: node pointer
 * @idx: index
 * @n: num
 *
 * Return: data of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr = *head;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; curr && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
