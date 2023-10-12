#include "main.h"

/**
 * print_square - checks if it is upper.
 *
 * @size: yeah
 * Return: multi
 *
 */

void print_square(int size)
{
	int t, s;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (s = size; s > 0; s--)
	{
	for (t = size; t > 0; t--)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
