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
	int n;
	long prev, curr, next;

	prev = 2;
	curr = 8;
	next = 0;
	n = 0;

	while (n < 100)
{
	if (curr < 4000000)
	{
		printf("%ld, ", curr);
	}
	else
	{
		printf("%ld\n", curr);
	}
	next = prev + curr;
	if ((next % 2) == 0)
	{
	prev = curr;
	curr = next;
	}
	n++;
	}
return (0);
}
