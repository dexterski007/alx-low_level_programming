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

	prev = 1;
	curr = 2;
	next = 0;
	n = 0;

	while (curr < 4000000)
	{
	if (curr % 2 == 0)
	{
	next = prev + curr;
	prev = curr;
	curr = next;
	}
	++n;
	}
	printf("%ld\n", curr);

return (0);
}
