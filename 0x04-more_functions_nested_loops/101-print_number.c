#include "main.h"

/**
 *  print_number - checks if it is upper.
 *
 * @n: yeah science
 * Return: multi
 *
 */

void print_number(int n)
{
	unsigned int r;

	r = n;
	if (n < 0)
	{
	n = n * -1;
	r = n;
	_putchar('-');
	}
	r = r / 10;
	if (r != 0)
	print_number(r);
	_putchar((unsigned int) n % 10 + '0');
}
