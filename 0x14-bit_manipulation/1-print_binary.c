#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: char
 *
 * Return: converted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int lead = 1;

	if (n == 0)
		{
			_putchar('0');
			return;
		}

	bit = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (bit > 0)
		{
			if (n & bit)
			{
				_putchar('1');
				lead = 0;
			}
			else if (!lead)
			_putchar('0');
			bit >>= 1;
		}
}
