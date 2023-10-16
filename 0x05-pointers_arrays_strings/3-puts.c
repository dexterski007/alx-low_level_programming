#include "main.h"

/**
 * _puts - check the code
 *
 * @str: yeah science
 * Return: void.
 */

void _puts(char *str)
{
	int l = 0;

	_putchar(*str);
	while (*str++)
	{
	_putchar(*str);
	l++;
	}
	_putchar('\n');
}
