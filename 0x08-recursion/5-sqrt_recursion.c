#include "main.h"
int squirrel(int n, int x);

/**
 * _sqrt_recursion - squared
 *
 * @n: number
 * Return: number
**/

int _sqrt_recursion(int n)

{
	return (squirrel(n, 1));
}


/**
 * squirrel - squared2
 *
 * @n: number
 * @x: iterations
 * Return: number
**/

int squirrel(int n, int x)

{
	if (x * x == n)
	return (x);
	if (x * x > n)
	return (-1);
	return (squirrel(n, x + 1));
}
