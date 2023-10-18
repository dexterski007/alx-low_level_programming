#include "main.h"

/**
 * print_number - to print a number fork this is a descr
 *
 * @n: number?
 * Return: walou
*/

void print_number(int n)

{
	int i = 0;
	int str[20];

	if (n < 0)
	{
	_putchar('-');
	}
	if (n == 0)
	{
	_putchar('0');
	return;
	}
	while (n > 0)
	{
	str[i] = n % 10;
	n /= 10;
	i++;
	}
	for (i--; i >= 0; i--)
	{
	_putchar(str[i] + '0');
	}
}
