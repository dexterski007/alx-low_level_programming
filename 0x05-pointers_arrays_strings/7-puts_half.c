#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: yeah science
 * Return: void.
 */

void puts_half(char *str)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (str[a] != '\0')
	{
	a++;
	}

	if (a % 2 == 0)
	{
	b = a / 2;
	while (str[b] != '\0')
	{
	_putchar(str[b]);
	b++;
	}
	}
	else
	{
	b = (a - 1) / 2;
	while (str[b] != '\0')
	{
	_putchar('\n');
	b++;
	}
	}
	_putchar('\n');
}
