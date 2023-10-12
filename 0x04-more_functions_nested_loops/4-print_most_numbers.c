#include "main.h"

/**
 *  print_most_numbers - checks if it is upper.
 *
 *
 * Return: multi
 *
 */

void print_most_numbers(void)
{
	int r = 0;
	int g = 48;

	while (r < 10)
	{
	if (r != 2 && r != 4)
	{
	_putchar(g + r);
	r++;
	}
	else
	{
	r++;
	}
	}
	_putchar(10);
}
