#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - is to split strings
 *
 * @str: string
 *
 * Return: char
**/

char **strtow(char *str)

{
	char **tab;
	int i = 0, j = 0, d = 0, f = 0;

	if (strcmp(str, "") == 0 || str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != ' ')
		j++;
		if (j > 0)
		d++;
	}

	tab = (char **)malloc((d + 1) * sizeof(char *));
	if (tab == NULL)
	return (NULL);
	d = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
		j = 0;
		while (str[i] != ' ' && str[i] != '\0')
		i++;
		j++;
		}
		
		if (j > 0)
		{
			tab[d] = (char *)malloc(j + 1);
			if (tab[d] == NULL)
			return (NULL);
			for (f = 0; f < j; f++)
			tab[d][f] = str[i - j + f];
			tab[d][j] = '\0';
			d++;
		}
	}
	tab[d] = NULL;
	return (tab);
}
