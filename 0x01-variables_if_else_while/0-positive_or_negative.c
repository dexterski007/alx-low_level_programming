#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: negative positive check
 *
 * Return: Always always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("$s is negative");
	}
	else
	{
		printf("$n is positive");
	}
	return (0);
}
