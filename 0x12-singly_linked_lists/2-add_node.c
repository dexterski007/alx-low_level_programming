#include "lists.h"

/**
 * add_node - 1st attempt to add nodes
 *
 * @head: node example
 * @str: string
 *
 * Return: address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nouv_node;
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
	nouv_node->next = *head;
	*head = nouv_node;

	return (*head);
}
