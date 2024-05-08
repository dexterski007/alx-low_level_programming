#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - helper function for interpolation search
 *
 * @array: array to search in
 * @size: array size
 * @value: value to search for
 *
 * Return: first index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (array[low] <= value && value <= array[high])
	{
		pos = low + (((double)(high - low) /
			     (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
		if (low == high)
			break;
	}

	return (-1);
}
