#include "main.h"

/**
 * binary_to_uint - converter
 *
 * @b: char
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		a = (a << 1) + (b[i] - '0');
		i++;
	}

	return (a);
}
