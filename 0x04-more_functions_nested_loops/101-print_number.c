#include "main.h"

/**
 *  print_number - checks if it is upper.
 *
 *
 * Return: multi
 *
 */

void print_number(int n)
{
	int r;

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
	_putchar((n % 10) + '0');
}
