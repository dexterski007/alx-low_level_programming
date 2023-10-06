#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: detects last digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);

	if (last == 0)
	{
		printf("zero \n");
	}
	else if (last < 6 && last != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("greater than 5\n");
	}
	return (0);
}
