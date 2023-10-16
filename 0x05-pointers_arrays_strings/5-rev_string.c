#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: yeah science
 * Return: void.
 */

void rev_string(char *s)
{
	int deb = 0;
	int fin = 0;
	char temp;

	while (s[fin] != '\0')
	{
	fin++;
	}
	fin--;

	while (fin > deb)
	{
	temp = s[deb];
	s[deb] = s[fin];
	s[fin] = temp;
	deb++;
	fin--;
	}
}
