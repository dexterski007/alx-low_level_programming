#include "main.h"

/**
 * clear_bit - clear binary
 *
 * @n: number
 * @index: index
 *
 * Return: set 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	bit = 1UL << index;

	*n &= ~bit;
		return (1);
}
