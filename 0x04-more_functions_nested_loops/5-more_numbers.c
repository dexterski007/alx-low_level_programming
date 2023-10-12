#include "main.h"

/**
 *  more_numbers - checks if it is upper.
 *
 *
 * Return: multi
 *
 */

void more_numbers(void)
{
	int r;
	int t;

	for (t = 0; t < 10; t++)
	{
	for (r = 0; r < 15; r++)
	{
	if (r >= 10)
	{
	_putchar(49);
	}
	_putchar((r % 10) + '0');
	}
	_putchar(10);
	}
}
