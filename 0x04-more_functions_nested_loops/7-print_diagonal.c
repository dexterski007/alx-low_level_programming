#include "main.h"

/**
 *  print_diagonal - checks if it is upper.
 *
 * @n: yeah
 * Return: multi
 *
 */

void print_diagonal(int n)
{
	int t, s;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (s = 0; s < n; s++)
	{
	for (t = 0; t < s; t++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
