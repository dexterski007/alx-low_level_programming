#include "main.h"

/**
 * print_times_table - prints the sign of a number
 *
 * @n: name
 * Description:and prints the corresponding
 * sign character. It returns 1 for positive numbers, -1 for negative numbers,
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */

void print_times_table(int n)
{
	int t, f, r;

	if (n >= 0 && n < 15)
	{
	for (f = 0; f <= n; f++)
	{
		_putchar('0');
	for (t = 1; t <= n; t++)
	{
		_putchar(',');
		_putchar(' ');
		r = t * f;
		if (r < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((r % 10) + '0');
		}
		else if (r < 100)
		{
			_putchar(' ');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		else
		{
			_putchar((r / 100) + '0');
			_putchar(((r / 10) % 10) + '0');
			_putchar((r % 10) + '0');
		}
	}
	_putchar('\n');
}
}
}
