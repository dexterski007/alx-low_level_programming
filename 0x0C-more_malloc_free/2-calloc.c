#include <stdlib.h>
#include <string.h>

/**
 * _calloc - malloc + initialize
 *
 * @nmemb: array members
 * @size: their size
 *
 * Return: nada
**/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *tab;

	if (nmemb == 0 || size == 0)
	return (NULL);

	tab = malloc(nmemb * size);
	if (tab == NULL)
	return (NULL);

	memset(tab, 0, nmemb * size);

	return (tab);
}
