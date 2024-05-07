#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - helper function for binary search
 *
 * @array: array to search in
 * @size: array size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t j = sqrt(size), left = 0, right = 0, i;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += j;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
	}
	return (-1);
}
