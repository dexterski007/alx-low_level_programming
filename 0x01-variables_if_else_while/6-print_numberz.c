#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the numbers using putchar
 *
 * Return: Always 0
 */

int main(void)

{
	int car;

	for (car = 0; car < 10; car++)
	{
		putchar(car + '0');
	}

	putchar('\n');

	return (0);
}
