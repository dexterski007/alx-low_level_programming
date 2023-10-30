#include <stdlib.h>

/**
 * create_array - is to create an array
 *
 * @size: size
 * @c: character
 *
**/

char *create_array(unsigned int size, char c)

{
	char *tab;
	unsigned int i;

	if (size == 0)
	return NULL;

	tab = (char *)malloc(size * sizeof(char));
	if (tab == NULL)
	return NULL;
	else
	{
	for (i = 0; i < size; i++)
	tab[i] = c;
	return (tab);
	}
}
