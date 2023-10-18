#include "main.h"

/**
 * print_number - to print a number fork this is a descr
 *
 * @n: number?
 * Return: walou
*/

void print_number(int n)

{
	unsigned int m = n;

	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n < 0)
	{
	_putchar('-');
	m = -m;
	}
	if ((m / 10) > 0)
	{
	print_number(m / 10);
	}
	_putchar((m % 10) + '0');

}
