#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 *
 * @a: yeah science
 * @n: yeah science 2
 * Return: void.
 */

void print_array(int *a, int n)
{
	int m = 0;

	while (m < n)
	{
	if (m == (n - 1))
	{
	printf("%d", *(a + m));
	}
	else
	{
	printf("%d, ", *(a + m));
	}
	m++;
	}
	printf("\n");
}
