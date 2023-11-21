#include "lists.h"

/**
 * find_listint_loop - print list safe
 *
 * @head: node pointer
 *
 * Return: number of nodes
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (head == NULL)
		return (NULL);

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			first = head;
			while (second != first)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}
	return (NULL);
}
