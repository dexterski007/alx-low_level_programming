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

	if (size == 0)
	return NULL;

	tab = (char *)malloc(size * c);
	if (tab == NULL)
	return NULL;
	else
	return (tab);
}
