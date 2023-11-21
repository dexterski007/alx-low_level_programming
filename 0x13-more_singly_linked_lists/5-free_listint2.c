#include "lists.h"

/**
 * free_listint2 - free nodes
 *
 * @head: node
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (*head == NULL || head == NULL)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	free(*head);
	*head = NULL;
}
