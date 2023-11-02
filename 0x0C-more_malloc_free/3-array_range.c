#include <stdlib.h>
#include <string.h>

/**
 * array_range - range of arrays
 *
 * @min: first int
 * @max: second int
 *
 * Return: pointer
**/

int *array_range(int min, int max)

{
	int *tab, n = 0, i = 0;

	if (min > max)
	return (NULL);

	n = max - min + 1;

	tab = malloc(sizeof(int) * n);
	if (tab == NULL)
	return (NULL);

	for (i = 0; i < n; i++)
	tab[i] = min + i;

	return (tab);
}
