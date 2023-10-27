#include "main.h"
#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * @dest: yeah science
 * @src: yeah science 2
 * Return: pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	dest[a] = '\0';
	return (dest);
}
