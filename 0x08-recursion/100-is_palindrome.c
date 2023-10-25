#include "main.h"
int squirrel(char *s, int start, int end);
int _strlen_recursion(char *s);


/**
 * is_palindrome - primes
 *
 * @s: string
 * Return: 1 or 0
**/

int is_palindrome(char *s)

{
	return (squirrel(s, 0, _strlen_recursion(s) - 1));
}

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

/**
 * squirrel - squared2
 *
 * @s: string
 * @start: start
 * @end: end
 * Return: number
**/

int squirrel(char *s, int start, int end)

{
	if (*(s + start) == (*(s + end)))
	{
		if (start == end || start == end + 1)
		return (1);
		return (0 + squirrel(s, start + 1, end - 1));
	}
	return (0);
}
