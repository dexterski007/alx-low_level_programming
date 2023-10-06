#include <stdio.h>

/**
 * main -  Entry point
 *
 * Description: putchar number combination
 *
 * Return: Always 0
 */

int main(void)

{
	int car;
	int car2;

	for (car = 0; car < 10; car++)
	{
		for (car2 = car + 1; car2 < 10; car2++)
		if (car != car2)
	{
		putchar(car + '0');
		putchar(car2 + '0');
	
		if (car != 8 || car2 != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
