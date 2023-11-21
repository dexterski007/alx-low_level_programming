#include "lists.h"

/**
 * pop_listint - free nodes
 *
 * @head: node pointer
 *
 * Return: data of node
 */

int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int n = 0;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(curr);
	return (n);
}
