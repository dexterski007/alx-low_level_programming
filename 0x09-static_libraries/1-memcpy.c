#include "main.h"

/**
 * _memcpy - cpy memory
 *
 * @src: source
 * @dest: destination
 * @n: number
 *
 * Return: char is the best
**/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
