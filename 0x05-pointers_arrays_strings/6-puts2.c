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

	while (str[a] != '\0')
	{
	if (a % 2 == 0)
	{
	_putchar(str[a]);
	a++;
	}
	a++;
	}
	_putchar('\n');
}
