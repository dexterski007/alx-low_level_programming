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
	long prev, curr, sum;

	prev = 1;
	curr = 2;
	sum = curr;
	n = 0;

	while (curr + prev < 4000000)
	{
		curr += prev;
	if (curr % 2 == 0)
	sum += curr;
	prev = curr - prev;
	++n;
	}
	printf("%ld\n", sum);

return (0);
}
