#include "lists.h"

/**
 * add_nodeint - add nodes
 *
 * @head: node
 * @n: integer
 *
 * Return: address or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
