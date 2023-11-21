#include "lists.h"

/**
 * sum_listint - sum node at index
 *
 * @head: node pointer
 *
 * Return: data of node
 */

int sum_listint(listint_t *head)
{
	int tot = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}

	return (tot);
}
