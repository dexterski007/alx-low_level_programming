#include "lists.h"

/**
 * delete_nodeint_at_index - del node at index
 *
 * @head: node pointer
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *curr2 = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(curr);
	return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if ((curr == NULL) || (curr->next == NULL))
		return (-1);
		curr = curr->next;
	}
	curr2 = curr->next;
	curr->next = curr2->next;
	free(curr2);

	return (1);
}
