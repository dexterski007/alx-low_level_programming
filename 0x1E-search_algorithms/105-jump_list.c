#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * jump_list - jump list search
 *
 * @list: list to search in
 * @size: size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), index = 0, i = 0;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	do {
		prev = list;
		i++;
		index = i * jump;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%lu] = [%d]\n", index, list->n);
	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}


