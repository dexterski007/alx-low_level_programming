#include "main.h"
#include <stdio.h>

/**
 * _strchr - string search
 *
 * @c: search
 * @s: location
 *
 * Return: location
**/

char *_strchr(char *s, char c)

{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == c)
		return (s + n);
	}
	return (NULL);
}
