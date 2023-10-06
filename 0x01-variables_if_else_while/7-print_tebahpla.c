#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: mirroring alpabet
 *
 * Return: Always 0
 */

int main(void)

{
	char car;

	for (car = 'z'; car >= 'a'; car--)
	{
		putchar(car);
	}

	putchar('\n');

	return (0);
}
