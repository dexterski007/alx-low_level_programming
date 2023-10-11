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

	sum = 1;
	n = 0;

	while (n < 50)
{
	sum = sum + sum;
	printf("%d, ", sum);
	n++;
	}
printf("\n");

return (0);
}
