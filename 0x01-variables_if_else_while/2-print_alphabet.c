#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet
 *
 * Return: Always 0
 */

int main(void)

{
	char car;

	for (car = 'a'; car <= 'z'; car++)
	{
		putchar(car);
	}

	putchar('\n');

	return (0);
}
