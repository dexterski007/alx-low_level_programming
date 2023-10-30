#include <stdlib.h>

/**
 * alloc_grid - is to concatenate
 *
 * @width: width
 * @height: height
 *
 * Return: integer
**/

int **alloc_grid(int width, int height)

{
	int **tab;
	int i = 0, j = 0;

	if (width <= 0)
	return (NULL);
	if (height <= 0)
	return (NULL);

	tab = (int **)malloc(height * sizeof(int *));
	if (tab == NULL)
	{
	free(tab);
	return (NULL);
	}

	for (i = 0; i < height; i++)
	tab[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		tab[i][j] = 0;
	}

	return (tab);
}
