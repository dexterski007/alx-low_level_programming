#include "lists.h"

/**
 * free_listint - free nodes
 *
 * @head: node
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
