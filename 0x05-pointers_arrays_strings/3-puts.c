#include "main.h"

/**
 * _puts - check the code
 *
 * @str: yeah science
 * Return: void.
 */

void _puts(char *str)
{

	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
