#include "main.h"

/**
 *  print_line- checks if it is upper.
 *
 * @n: yeah
 * Return: multi
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > 0)
	{
	_putchar(95);
	n--;
	}
	}
	_putchar(10);
}
