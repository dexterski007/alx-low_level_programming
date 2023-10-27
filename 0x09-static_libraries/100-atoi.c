#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 *
 * @s: yeah science
 *
 * Return: pointer.
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int ng = 1;

	while (s[a])
	{
	if (s[a] == '-')
	{
	ng = (ng * -1);
	}
	while (s[a] >= '0' && s[a] <= '9')
	{
	b = (b * 10) + (s[a] - '0');
	a++;
	}
	if (b != 0)
	{
	break;
	}
	a++;
	}
	return (b * ng);
}
