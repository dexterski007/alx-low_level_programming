#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabets lower and upper
 *
 * Return: Always 0
 */

int main(void)

{
	char car;
	char car2;

	for (car = 'a'; car <= 'z'; car++)
	{
		putchar(car);
	}
	for (car2 = 'A'; car2 <= 'Z'; car2++)
	{
		putchar(car2);
	}


	putchar('\n');

	return (0);
}
