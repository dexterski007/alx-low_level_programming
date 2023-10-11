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
	int n, prev, curr, next;

	prev = 1;
	curr = 1;
	next = 0;
	n = 0;

	while (n < 50)
{
	if (n < 49)
	{
		printf("%d, ", curr);
	}
	else
	{
		printf("%d\n", curr);
	}
	next = prev + curr;
	prev = curr;
	curr = next;
	n++;
	}
return (0);
}
