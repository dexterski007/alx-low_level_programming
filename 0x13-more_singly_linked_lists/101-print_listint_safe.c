#include "lists.h"

/**
 * print_listint_safe - print list safe
 *
 * @head: node pointer
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = NULL;
	const listint_t *fast = NULL;
	size_t c = 0;
	size_t new;

	slow = head;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		c++;
		slow = slow->next;
		fast = head;
		new = 0;
		while (new < c)
		{
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (c);
		}
		fast = fast->next;
		new++;
		}
		if (head == NULL)
		{
			exit(98);
		}
		}
	return (c);
}
