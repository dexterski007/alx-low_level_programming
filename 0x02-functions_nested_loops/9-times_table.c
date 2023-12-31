#include "main.h"

/**
 * times_table - prints the sign of a number
 *
 * Description:
 * This function checks the sign of the number 'n' and prints the corresponding
 * sign character. It returns 1 for positive numbers, -1 for negative numbers,
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */

void times_table(void)
{
	int t, f, r;

	for (f = 0; f <= 9; f++)
	{
		_putchar('0');
	for (t = 1; t <= 9; t++)
	{
		_putchar(',');
		_putchar(' ');
		r = t * f;
		if (r < 10)
		{
			_putchar(' ');
		}
		else
		{
			_putchar((r / 10) + '0');
		}
			_putchar((r % 10) + '0');
	}
	_putchar('\n');
}
}
