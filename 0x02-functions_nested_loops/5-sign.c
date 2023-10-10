#include "main.h"
/**
 * _print_sign - functions and nested
 *
 * @n: this parameter is ok
 *
 * Description - functionsalphabet is lower parameter 'c' is actually cool
 *
 * Return: always 0 or 1
 *
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	elseif (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
}
