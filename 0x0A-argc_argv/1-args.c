#include <stdio.h>

/**
 * main - print n args
 *
 * @argc: count
 * @argv: text
 * Return: 0 always
**/

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
