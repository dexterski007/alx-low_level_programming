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

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			     (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld]", pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high && array[low] != value)
			break;
	}

	return (-1);
}
