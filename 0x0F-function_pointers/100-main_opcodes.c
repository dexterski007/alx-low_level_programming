#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcodes
 *
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success 98 if fail
**/

int main(int argc, char **argv)
{
	int i, b = 0;
	unsigned char op;
	int (*func)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		if (i > 0)
		printf(" ");
	op = *(char *)func;
	printf("%.2x", op);
	func++;
	}
	printf("\n");

	return (0);
}
