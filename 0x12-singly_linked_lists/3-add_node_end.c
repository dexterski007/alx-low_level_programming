#include "lists.h"

/**
 * add_node_end - 1st attempt to add nodes
 *
 * @head: node example
 * @str: string
 *
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouv_node;
	list_t *current = *head;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	nouv_node = malloc(sizeof(list_t));
	if (nouv_node == NULL)
		return (NULL);

	nouv_node->str = strdup(str);
	if (nouv_node->str == NULL)
	{
		free(nouv_node);
		return (NULL);
	}
	nouv_node->len = len;
	nouv_node->next = NULL;

	if (*head == NULL)
	{
		*head = nouv_node;
		return (nouv_node);
	}
	while (current->next)
		current = current->next;
	current->next = nouv_node;


	return (nouv_node);
}
