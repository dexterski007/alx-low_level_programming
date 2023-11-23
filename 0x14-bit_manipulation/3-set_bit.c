#include "main.h"

/**
 * set_bit - set binary
 *
 * @n: number
 * @index: index
 *
 * Return: bit value or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	bit = 1UL << index;

	*n |= bit;
		return (1);
}
