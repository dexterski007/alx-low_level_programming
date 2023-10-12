#include <stdio.h>
/**
 * main - fizzbuzz
 *
 *
 * Return: it depends.
 *
 */

int main(void)
{
	int r;

	for (r = 1; r < 101; r++)
	{
	if ((r % 3 == 0) && (r % 5 == 0))
	printf("FizzBuzz ");
	else if (r % 3 == 0)
	printf("Fizz ");
	else if (r % 5 == 0)
	printf("Buzz ");
	else
	printf("%d ", r);
	}
	return (0);
}
