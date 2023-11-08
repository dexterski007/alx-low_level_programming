#include <stddef.h>

/**
 * array_iterator - a function to pointer to print name
 *
 * @array: an array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nada
**/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int a = 0;

	if (array != NULL && size != 0 && action != NULL)
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
