#include <stdio.h>

/**
 * print_buffer - to print a number fork this is a descr
 *
 * @b: string
 * @size: size
 * Return: walou
*/

void print_buffer(char *b, int size)

{
	int s = 0, k = 0, c = 0, d = 0;

	if (size <= 0)
	printf("\n");
	else
	{
	while (s < size)
	{
	if (size - s < 10)
	d = size - s;
	else
	d = 10;
	printf("%08x: ", s);
	for (k = 0; k < 10; k++)
	{
	if (k < d)
	printf("%02x", b[k + s]);
	else
	printf("  ");
	if (k % 2 != 0)
	printf(" ");
	}
	for (k = 0; k < d; k++)
	{
	c = b[k + s];
	if (c >= 32 && c <= 126)
	printf("%c", c);
	else
	printf(".");
	}
	printf("\n");
	s += 10;
	}
	}
}
