#include "lists.h"

/**
 * reverse_listint - reverse list
 *
 * @head: node pointer
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prec = NULL;
	listint_t *suiv = *head;

	while (*head != NULL)
	{
		suiv = (*head)->next;
		(*head)->next = prec;
		prec = *head;
		*head = suiv;
	}


	*head = prec;
	return (*head);
}
