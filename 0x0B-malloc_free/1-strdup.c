#include <stdlib.h>

/**
 * _strdup - is to duplicate
 *
 * @str: string
 *
 * Return: char
**/

char *_strdup(char *str)

{
	char *tab;
	int i = 0, j = 0;

	if (str == NULL)
	return (NULL);

	while (str[i] != '\0')
	i++;

	i++;
	tab = (char *)malloc(i);
	if (tab == NULL)
	return (NULL);

	i++;
	for (j = 0; j < i; j++)
	tab[j] = str[j];

	return (tab);
}
