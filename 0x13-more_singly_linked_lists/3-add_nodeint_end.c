#include "lists.h"

/**
 * add_nodeint_end - add nodes at the end
 *
 * @head: node
 * @n: integer
 *
 * Return: address or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
		while (curr->next != NULL)
			curr = curr->next;
	curr->next = new;
	return (new);
}
