#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_search_recursion - helper function for binary search
 *
 * @array: array to search in
 * @low: low side
 * @high: high side
 * @value: value to search for
 * @sz: original size
 *
 * Return: first index where the value is located
 */

int advanced_binary_search_recursion(int *array, size_t size, int value)
{
	size_t i, mid;

	if (array == NULL || size == 0)
		return (-1);

	mid = size / 2;

	printf("Searching in array");
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf(": %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (array[mid] == value)
	{
		if (mid > 0)
			return (advanced_binary_search_recursion(
					array, mid + 1, value));
		return (mid);
	}

	if (value < array[mid])
		return (advanced_binary_search_recursion(array,
				mid + 1, value));
	mid++;
	return (advanced_binary_search_recursion(array + mid,
			size - mid, value) + mid);
}

/**
 * advanced_binary - helper function for binary search
 *
 * @array: array to search in
 * @size: array size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int ind;

	ind = advanced_binary_search_recursion(array, size, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);
	return (ind);
}
