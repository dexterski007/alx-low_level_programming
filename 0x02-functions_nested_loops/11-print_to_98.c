#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the sign of a number
 *
 * @n: hey jude
 *
 * Description: This function checks the sign of
 * the number 'n' and prints the corresponding
 * sign character. It returns 1 for positive numbers, -1 for negative numbers,
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */

int print_to_98(int n)
{
	for (n <= 98)
	{
		if (n < 98)
		{
		printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	return (0);
}
