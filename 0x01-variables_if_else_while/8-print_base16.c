#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print base 16 numbers
 *
 * Return: Always 0
 */

int main(void)

{
	int car;
	int car2;

	for (car = 0; car < 10; car++)
	{
		putchar(car + '0');
	}
	for (car2 = 'a'; car2 <= 'f'; car2++)
	{
		putchar(car2);
	}

	putchar('\n');

	return (0);
}
