#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: yeah science
 * Return: void.
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end)
	end++;

	while (end > s)
	{
	end--;
	_putchar(*end);
	}
	_putchar('\n');
}
