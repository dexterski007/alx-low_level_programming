#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search_recursion_2 - helper function for binary search
 *
 * @array: array to search in
 * @low: low side
 * @high: high side
 * @value: value to search for
 * @print: boolean to disable printing
 *
 * Return: first index where the value is located
 */

int binary_search_recursion_2(
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
		return (binary_search_recursion_2(array, low, mid - 1, value, print));
	else if (value > array[mid])
		return (binary_search_recursion_2(array, mid + 1, high, value, print));
	else
		return (mid);
}

/**
 * exponential_search - helper function for exponential search
 *
 * @array: array to search in
 * @size: array size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		while (bound < size && array[bound] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
	}

	if (bound < size)
		right = bound;
	else
		right = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n",
		   bound / 2, right);
	return (binary_search_recursion_2(array,
		    bound / 2, right, value, 1));
}
