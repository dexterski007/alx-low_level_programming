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
	char *tab, *p1, *p2;
	int i = 0, j = 0, c = 0, d = 0;

	if (s1 == NULL)
	p1 = "";
	else p1 = s1;
	if (s2 == NULL)
	p2 = "";
	else p2 = s2;

	while (p1[i] != '\0')
	i++;

	while (p2[j] != '\0')
	j++;

	tab = (char *)malloc(i + j + 1);
	if (tab == NULL)
	return (NULL);

	i++;
	j += i;
	
	for (c = 0; c < i; c++)
	tab[c] = p1[c];
	
	while (p2[d] != '\0')
	{
	tab[c] = p2[d];
	c++;
	d++;
	}
	tab[c] = '\0';
	return (tab);
}
