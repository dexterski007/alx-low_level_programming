#include <stdio.h>
#include <stdlib.h>

/**
 * main -  coin change
 *
 * @argc: count
 * @argv: text
 *
 * Return: 0 always
**/

int main(int argc, char *argv[])

{
	int coins = 0, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		coins++;
		if (change - 25 >= 0)
		{
		change -= 25;
		continue;
		}
		if (change - 10 >= 0)
		{
		change -= 10;
		continue;
		}
		if (change - 5 >= 0)
		{
		change -= 5;
		continue;
		}
		if (change - 2 >= 0)
		{
		change -= 2;
		continue;
		}
		if (change - 1 >= 0)
		{
		change -= 1;
		continue;
		}
		change--;
	}
	printf("%d\n", coins);
	return (0);
}
