#include <stdio.h>

/**
 * main - print n args
 *
 * @argc: count
 * @argv: text
 *
 * Return: 0 always
**/

int main (int argc, char *argv[])

{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
