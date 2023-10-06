#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: putchar number combination 3 digits
 *
 * Return: Always 0
 */

int main(void)

{
	int car;
	int car2;
	int car3;

	for (car = 0; car < 10; car++)
	{
		for (car2 = car + 1; car2 < 10; car2++)
		{
			for (car3 = car2 + 1; car3 < 10; car3++)
			if (car != car2 && car != car3 && car2 != car3)
			{
			putchar(car + '0');
			putchar(car2 + '0');
			putchar(car3 + '0');

		if (car != 7 || car2 != 8 || car3 != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		}
	}
	putchar('\n');

	return (0);
}
