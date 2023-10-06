#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar number comma and space
 *
 * Return: Always 0
 */

int main(void)

{
	int car;

	for (car = 0; car < 10; car++)
	{
		putchar(car + '0');
		if (car < 9)
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
