#include <stddef.h>

/**
 * int_index - a function to pointer to print name
 *
 * @array: an array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: integer
**/

int int_index(int *array, int size, int (*cmp)(int))

{
	int a = 0;

	if (size == 0)
	return (-1);

	if (array != NULL && size != 0 && cmp != NULL)
	while (a < size)
	{
		if (cmp(array[a]) != 0)
		return (a);
		a++;
	}
	return (-1);
}
