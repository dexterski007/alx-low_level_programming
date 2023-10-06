#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet except e and q
 *
 * Return: Always 0
 */

int main(void)

{
	char car;

	for (car = 'a'; car <= 'z'; car++)
		if (car != 'e' && car != 'q')
	{
		putchar(car);
	}

	putchar('\n');

	return (0);
}
