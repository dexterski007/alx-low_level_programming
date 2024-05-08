#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * linear_skip - skip list search
 *
 * @list: list to search in
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *fast;

	if (list == NULL)
		return (NULL);
	while (value > list->n && list->next)
	{
		fast = list;
		list = list->express;
		if (!list)
		{
			list = fast;
			while (list->next)
				list = list->next;
		}
		if (list != fast->express)
			break;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	
	printf("Value found between indexes [%lu] and [%lu]\n",
		fast->index, list->index);
	while (fast && fast->index <= list->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   fast->index, fast->n);
		if (fast->n == value)
			return (fast);
		fast = fast->next;
	}
	return (NULL);
}
