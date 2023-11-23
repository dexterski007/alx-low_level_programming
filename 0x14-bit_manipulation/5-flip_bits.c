#include "main.h"

/**
 * flip_bits - reverse bits
 *
 * @n: source
 * @m: destination
 *
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m;
	unsigned int count = 0;

	while (bit > 0)
	{
	count += bit & 1;
	bit >>= 1;
	}

	return (count);
}
