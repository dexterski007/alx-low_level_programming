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
	char str[20];
	int m = n;

	if (n == 0)
	{
	str[i] = '0';
	i++;
	}
	if (n < 0)
	n = -n;
	while (n > 0)
	{
	str[i] = (n % 10) + '0';
	n /= 10;
	i++;
	}
	if (m < 0)
	{
	str[i] = '-';
	i++;
	}
	for (i--; i >= 0; i--)
	{
	_putchar(str[i]);
	}
}
