#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - string search
 *
 * @a: number of
 * @size: size of the matrix
 *
 * Return: nada
**/

void print_diagsums(int *a, int size)

{
	int i;
	int tot1 = 0;
	int tot2 = 0;

	for (i = 0; i < size; i++)
	{
		tot1 = tot1 + a[i * size + i];
		tot2 = tot2 + a[i * size + (size - 1 -i);
	}
	printf("%d, %d\n", tot1, tot2);
}
