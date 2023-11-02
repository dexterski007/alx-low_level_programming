#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check malloc function
 *
 * @s1: first string
 * @s2: second string
 * @n: size
 *
 * Return: char
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int len1, len2;
	char *tab;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len2 <= n)
	n = len2;

	tab = malloc(len1 + n + 1);
	if (tab == NULL)
	return (NULL);

	strcpy(tab, s1);
	strncat(tab, s2, n);

	return (tab);
}
