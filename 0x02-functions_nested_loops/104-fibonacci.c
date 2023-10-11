#include <stdio.h>

/**
 * main - prints the sign of a number
 *
 * Description: This function checks the sign of
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	unsigned long int a1, b1, a2, b2, c1, c2;
	int count;

	printf("%lu, %lu, ", a, b);

	for (count = 2; count < 96; count++)
	{
	c = a + b;
	printf("%lu, ", c);

	a = b;
	b = c;
	}
		a1 = a / 10000000000;
		a2 = a % 10000000000;
		b1 = b / 10000000000;
		b2 = b % 10000000000;
	for (count = 96; count < 99; count++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;
		if (a2 + b2 > 9999999999)
		{
			c1 = c1 + 1;
			c2 = c2 % 100000000000;
		}
		printf("%lu%lu", c1, c2);
		if (count < 98)
		printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	printf("\n");

	return (0);
}
