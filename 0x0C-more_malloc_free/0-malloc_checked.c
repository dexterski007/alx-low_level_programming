#include <stdlib.h>

/**
 * malloc_checked - check malloc function
 *
 * @b: allocation size
 *
 * Return: ptr is returned
**/

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
