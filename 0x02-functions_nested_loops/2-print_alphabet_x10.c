#include "main.h"
/**
 * print_alphabet_x10 - functions and nested
 *
 * Description - functionsalphabet
 *
 * Return: always 0
 *
 *
 */

void print_alphabet_x10(void)
{
	char lett;
	int times = 0;

	while (times < 10)
	{
	for (lett = 'a'; lett <= 'z' ; lett++)
	_putchar(lett);
	_putchar('\n');
times++;
}
}
