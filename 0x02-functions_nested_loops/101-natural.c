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
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
{
	if ((n % 3 == 0) || (n % 5 == 0))
	{
		sum = sum + n;
	}
}
printf("%d\n", sum);

return (0);
}
