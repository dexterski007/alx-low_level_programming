#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search_recursion - helper function for binary search
 *
 * @array: array to search in
 * @low: low side
 * @high: high side
 * @value: value to search for
 * @print: boolean to disable printing
 *
 * Return: first index where the value is located
 */

int binary_search_recursion(
	int *array,
	size_t low,
	size_t high,
	int value,
	int print
	)
{
	size_t i, mid;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	if (print)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
	}

	if (value < array[mid])
		return (binary_search_recursion(array, low, mid - 1, value, print));
	else if (value > array[mid])
		return (binary_search_recursion(array, mid + 1, high, value, print));
	else
		return (mid);
}

/**
 * binary_search - helper function for binary search
 *
 * @array: array to search in
 * @size: array size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, 0, size - 1, value, 1));
}
