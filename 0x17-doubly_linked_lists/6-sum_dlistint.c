#include "lists.h"

/**
 * sum_dlistint - sum list
 *
 * @head: head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int somm = 0;

	if (head == NULL)
		return (somm);

	while (head != NULL)
	{
		somm += head->n;
		head = head->next;
	}

	return (somm);
}
