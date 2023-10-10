#include "main.h"

/**
 * jack_bauer - prints the sign of a number
 *
 * Description:
 * This function checks the sign of the number 'n' and prints the corresponding
 * sign character. It returns 1 for positive numbers, -1 for negative numbers,
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */

void jack_bauer(void)
{
	int h, h2, m, m2;

	for (h = 0; h <= 2; h++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
		if ((h <= 1 && h2 <= 9) || (h <= 2 && h2 <= 3))
		{
		for (m = 0; m <= 5; m++)
		{
		for (m2 = 0; m2 <= 9; m2++)
		{
		_putchar(h + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(m2 + '0');
		_putchar('\n');
}
}
}
}
}
}
