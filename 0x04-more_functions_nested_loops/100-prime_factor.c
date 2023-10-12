#include <stdio.h>
#include <math.h>

/**
 * main - ptimus prime
 *
 *
 * Return: it depends.
 *
 */

int main(void)
{
	long r, max;
	long n = 612852475143;
	double sq;

	sq = sqrt(n);
	for (r = 1; r <= sq; r++)
	{
	if (n % r == 0)
	{
	max = n / r;
	}
	}
	printf("%lu", max);
	printf("\n");
	return (0);
}
