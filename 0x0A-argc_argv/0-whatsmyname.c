#include <stdio.h>

/**
 * main - print args
 *
 * @argc: count of args
 * @argv: text of args
 *
 * Return: 0 always
**/

int main(__attribute__((unused)) int argc, char *argv[])

{
	printf("%s\n", argv[0]);
	return (0);
}
