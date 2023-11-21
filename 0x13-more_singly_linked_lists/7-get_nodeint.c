#include "lists.h"

/**
 * get_nodeint_at_index - return node at index
 *
 * @head: node pointer
 * @index: index of node
 *
 * Return: data of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);
	else
		return (NULL);
}
