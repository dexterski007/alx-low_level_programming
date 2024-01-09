#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node list
 *
 * @h: head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 1; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free (temp);

	return (1);
}
