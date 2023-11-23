#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: true or false
 */

int get_endianness(void)
{
	unsigned int val = 1;

	if (*(char *)&val == 1)
		return (1);
	else
		return (0);
}
