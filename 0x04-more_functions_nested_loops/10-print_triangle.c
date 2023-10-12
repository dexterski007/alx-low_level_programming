#include "main.h"

/**
 * print_triangle - cheer.
 *
 * @size: yeah
 * Return: multi
 *
 */

void print_triangle(int size)
{
	int t, s, x;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (s = 0; s < size; s++)
	{
	for (t = size - s; t > 1; t--)
	{
	_putchar(' ');
	}
	for (x = 0; x <= s; x++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
