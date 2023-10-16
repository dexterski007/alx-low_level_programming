#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: yeah science
 * Return: void.
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
	a++;
	}
	while (b < a)
	{
	_putchar(str[b]);
	b += 2;
	}
	_putchar('\n');
}
