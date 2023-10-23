#include "main.h"

/**
 * _strspn - string search
 *
 * @accept: number of
 * @s: segment
 *
 * Return: location
**/

unsigned int _strspn(char *s, char *accept)

{
	int i;
	int j;
	int c = 0;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			c++;
			f = 1;
			}
		}
		if (f == 0)
		return (c);
	}
	return (c);
}
