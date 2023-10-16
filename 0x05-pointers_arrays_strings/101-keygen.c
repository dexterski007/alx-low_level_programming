#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - keygen
 *
 * Return: yeah
 */
int main(void)
{
	int gen[72];
	int c, tot;
	int m;

	tot = 0;

	srand(time(NULL));

	for (c = 0; c < 72; c++)
	{
	gen[c] = rand() % 50;
	tot = tot + (gen[c] + '0');
	putchar(gen[c] + '0');
	if ((2772 - tot) - '0' < 78)
	{
	m = 2772 - tot - '0';
	tot = tot + m;
	putchar(m + '0');
	break;
	}
	}

	return (0);
}
