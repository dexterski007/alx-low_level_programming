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
 *
 * Return: first index where the value is located
 */

int advanced_binary_search_recursion(
	int *array,
	size_t low,
	size_t high,
	int value
	)
{
	size_t i, mid;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_search_recursion(array, low, mid, value));
	}

	if (value < array[mid])
		return (advanced_binary_search_recursion(array,
				low, mid - 1, value));
	else
		return (advanced_binary_search_recursion(array,
				mid + 1, high, value));
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

	if (array == NULL)
		return (-1);

	ind = advanced_binary_search_recursion(array, 0, size - 1, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);
	return (ind);
}
