#include <stdlib.h>

/**
 * str_concat - is to concatenate
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char
**/

char *str_concat(char *s1, char *s2)

{
	char *tab;
	int i = 0, j = 0, c = 0, d = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	i++;
	d = i + j;
	j = 0;

	tab = (char *)malloc(d);
	if (tab == NULL)
	return (NULL);

	for (c = 0; c < d; c++)
	{
	if (c < i)
	tab[c] = s1[c];
	if (c >= i)
	{
	tab[c] = s2[j];
	j++;
	}
	}
	tab[c] = '\0';
	return (tab);
}
