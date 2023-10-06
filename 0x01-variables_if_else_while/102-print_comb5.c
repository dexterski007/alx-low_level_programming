#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: putchar number combination 4 digits
 *
 * Return: Always 0
 */

int main(void)

{
	int car;
	int car2;

	for (car = 0; car < 100; car++)
	{
		for (car2 = car + 1 ; car2 < 100; car2++)
		{
					putchar((car / 10) + '0');
					putchar((car % 10) + '0');
					putchar(' ');
					putchar((car2 / 10) + '0');
					putchar((car2 % 10) + '0');

		if (car != 98 || car2 != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}

	putchar('\n');

	return (0);
}
