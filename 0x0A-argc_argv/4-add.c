#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  add infinity args
 *
 * @argc: count
 * @argv: text
 *
 * Return: 0 always
**/

int main(int argc, char *argv[])

{
	int i, j, sum = 0;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		arg = argv[i];
		while (arg[j] != '\0')
		{
		if (!(isdigit(arg[j])) && !(arg[j] == '-' && j == 0 && isdigit(arg[j + 1])))
		{
			printf("Error\n");
			return (1);
		}
		j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
