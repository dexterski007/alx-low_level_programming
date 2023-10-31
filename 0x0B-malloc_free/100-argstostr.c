#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - is to concatenate arguments
 *
 * @ac: count
 * @av: arguments
 *
 * Return: char
**/

char *argstostr(int ac, char **av)

{
	char *tab;
	int i = 0, j = 0, d = 0, f = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		d++;
	}

	tab = malloc((sizeof(char) * d) + ac + 1);

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		tab[f] = av[i][j];
		f++;
		}
		tab[f] = '\n';
		f++;
	}
	f++;
	tab[f] = '\0';
	return (tab);
}
