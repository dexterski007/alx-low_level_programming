#include "main.h"

/**
 * _memset - sets memory
 *
 * @s: pointer
 * @b: byte
 * @n: number
 *
 * Return: char
**/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = _putchar(b + i);
	}
	return (s);
}
