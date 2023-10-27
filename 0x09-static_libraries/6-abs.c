#include "main.h"

/**
 * _abs - prints the sign of a number
 * @n: The number to check
 *
 * Description:
 * This function checks the sign of the number 'n' and prints the corresponding
 * sign character. It returns 1 for positive numbers, -1 for negative numbers,
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = (n * -1);
		return (n);
	}
	else
	{
		return (0);
	}
}
