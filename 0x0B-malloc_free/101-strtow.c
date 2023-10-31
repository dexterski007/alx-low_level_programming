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
	int len = strlen(str);

	if (strcmp(str, "") == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
		j = 0;
		while (i < len && str[i] != ' ')
		{
		i++;
		j++;
		}
		d++;
		}
	}

	tab = (char **)malloc((d + 1) * sizeof(char *));
	if (tab == NULL)
	return (NULL);
	d = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
		j = 0;
		while (i < len && str[i] != ' ')
		{
		i++;
		j++;
		}
	
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
