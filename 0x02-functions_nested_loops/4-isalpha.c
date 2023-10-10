#include "main.h"
/**
 * _isalpha - functions and nested
 *
 * @c: this parameter is ok
 *
 * Description - functionsalphabet is lower parameter 'c' is actually cool
 *
 * Return: always 0 or 1
 *
 *
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >=65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
