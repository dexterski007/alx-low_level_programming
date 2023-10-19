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
	int s = 0;
	int k = 0;
	char c;

	if (size <= 0)
	printf("\n");
	else
	{
	for (s = 0; s < size; s += 10)
	{
	if (k < size)
	{
	printf("%08x: ", s);
	for (k = s; k < s + 10; k++)
	{
	printf("%02x", b[k]);
	if (k % 2 != 0)
	printf(" ");
	}
	printf(" ");
	}
	for (k = s; k < s + 10; k++)
	{
	if (k < size)
	{
	c = b[k];
	if (c >= 32 && c <= 126)
	printf("%c", c);
	else
	printf(".");
	}
	}
	printf("\n");
	}
	}
}
