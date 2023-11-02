#include <stdlib.h>
#include <string.h>

/**
 * _realloc - malloc + move
 *
 * @ptr: old location
 * @old_size: old size
 * @new_size: new size
 *
 * Return: nada
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	void *tab;
	unsigned int cpy_size;

	if (new_size == old_size)
	return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	return (malloc(new_size));

	tab = malloc(new_size);
	if (tab == NULL)
	return (NULL);

	if (old_size < new_size)
	cpy_size = old_size;
	else
	cpy_size = new_size;
	memcpy(tab, ptr, cpy_size);
	free(ptr);
	return (tab);
}
