#include "main.h"

/**
 * _strlen_recursion - string length using recursions
 *
 * @s: string
 * Return: number
**/

int _strlen_recursion(char *s)
{
	if (!(*s))
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

